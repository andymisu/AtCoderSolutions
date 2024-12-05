#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    vector<set<int>> edge(n);
    vector<int> deg(n);
    for (int i = 0; i < n-1; ++i){
        int a,b;
        cin>>a>>b;
        --a;
        --b;
        deg[a]++;
        deg[b]++;
        edge[a].insert(b);
        edge[b].insert(a);
    }

    set<int> V;
    for (int i = 0; i < k; ++i){
        int x;
        cin>>x;
        V.insert(x - 1);
    }

    queue<int> q;
    for (int i = 0; i < n; ++i){
        if (deg[i] == 1) {
            q.push(i);
        }
    }

    int ans = n;
    while (!q.empty()){
        int v = q.front();
        q.pop();
        if (V.find(v) == V.end() && !edge[v].empty()){
            int vv = *edge[v].begin();
            edge[v].clear();
            edge[vv].erase(v);

            --ans;
            if (edge[vv].size() == 1) {
                q.push(vv);
            }
        }
    }

    cout<<ans;
    return 0;
}
