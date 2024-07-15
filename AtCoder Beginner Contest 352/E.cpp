#include <bits/stdc++.h>
using namespace  std;
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
int main() {
    int n,m;
    cin>>n>>m;
    map<int,list<pair<int,int>>> edge;
    for(int i = 0 ; i < m; i++){
        int k, c;
        cin>>k>>c;
        int x;
        cin>>x;
        for(int j = 1; j < k; j++){
            int a;
            cin>>a;
            edge[c].push_back({x,a});
        }
    }
    long long sol = 0;
    DSU s(n+1);
    for(auto it : edge){
        for(auto i : it.second){
           int w = it.first;
           int x = i.first;
           int y = i.second;
           if(s.cauta(x) != s.cauta(y)){
               s.unite(x,y);
               sol += w;
           }
        }
    }
    int verif = s.cauta(1);
    for(int i = 2; i <= n; i++){
        if(verif != s.cauta(i)){
            cout<<-1;
            return 0;
        }
    }
    cout<<sol;
    return 0;
}
