#include <bits/stdc++.h>
using namespace std;

class DSU{
public:
    vector<int> parents;
    vector<vector<int>> member;

    DSU(int n) {
        parents.resize(n, -1);
        member.resize(n);
        for (int i = 0; i < n; i++) {
            member[i].push_back(i);
        }
    }

    int find(int x) {
        if (parents[x] < 0) {
            return x;
        } else {
            return parents[x] = find(parents[x]);
        }
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);

        if (x == y) return;

        if (parents[x] > parents[y]) {
            swap(x, y);
        }

        parents[x] += parents[y];
        parents[y] = x;

        member[x].insert(member[x].end(), member[y].begin(), member[y].end());
        sort(member[x].rbegin(), member[x].rend());
        if (member[x].size() > 10) {
            member[x].resize(10);
        }
    }
};

int main() {
    int n,q;
    cin>>n>>q;
    DSU s(n + 1);

    for(int j = 0; j < q; j++){
        int query;
        cin >> query;
        if (query == 1) {
            int x, y;
            cin>>x>>y;
            s.unite(x, y);
        } else {
            int v, k;
            cin>>v>>k;
            v = s.find(v);
            if(s.member[v].size() < k) {
                cout<<-1<<'\n';
            } else {
                cout<<s.member[v][k - 1]<<endl;
            }
        }
    }
    return 0;
}
