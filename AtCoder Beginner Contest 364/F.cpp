#include <bits/stdc++.h>
using namespace std;
class DSU {
    int* parent;
    int* rank;

public:
    DSU(int n)
    {
        parent = new int[n];
        rank = new int[n];

        for (int i = 0; i < n; i++) {
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    // Find function
    int cauta(int i)
    {
        if (parent[i] == -1)
            return i;

        return parent[i] = cauta(parent[i]);
    }
    int get_rank(int x){
        return rank[x];
    }
    // Union function
    void unite(int x, int y)
    {
        int s1 = cauta(x);
        int s2 = cauta(y);

        if (s1 != s2) {
            if (rank[s1] < rank[s2]) {
                parent[s1] = s2;
            }
            else if (rank[s1] > rank[s2]) {
                parent[s2] = s1;
            }
            else {
                parent[s2] = s1;
                rank[s1] += 1;
            }
        }
    }
};
bool cmp(pair<pair<int,int>,int> x, pair<pair<int,int>,int> y){
    return x.second < y.second;
}
int main() {
    int n, q;
    cin>>n>>q;
    vector<pair<pair<int,int>,int>> v(q);
    for(int i = 0; i < q; i++){
            int l,r,c;
            cin>>l>>r>>c;
            v[i].first.first = l;
            v[i].first.second = r;
            v[i].second = c;
    }
    sort(v.begin(),v.end(),cmp);
    long long sol = 0;
    DSU s(n+q+1);
    int nr_edges = 0;
    for(int i = 0; i < q; i++){
        int l = v[i].first.first;
        int r = v[i].first.second;
        int c = v[i].second;
        int node = n + i + 1;
        for(int j = l; j <= r; j++){
            int c1 = s.cauta(j);
            int c2 = s.cauta(node);
            if(c1 != c2){
                s.unite(c1,c2);
                nr_edges++;
                sol += c;
            }
            if(nr_edges == n+q-1){
                break;
            }
        }
        if(nr_edges == n+q-1){
            break;
        }
    }
    if(nr_edges == n+q-1){
        cout<<sol;
    }else{
        cout<<-1;
    }
    return 0;
}
