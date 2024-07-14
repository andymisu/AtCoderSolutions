#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");
class DSU {
    int* parent;
    int* rank;

public:
    DSU(int n)
    {
        parent = new int[n+1];
        rank = new int[n+1];

        for (int i = 1; i <= n; i++) {
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    // Find function
    int cauta(int i)
    {
        if (parent[i] == -1)
            return i;

        return cauta(parent[i]);
    }
    // Union function
    int get_rank(int i){
        return rank[i];
    }
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
    DSU s(n+1);
    long long int sol = 0;
    vector<long long int> fr(n+1);
    for(int i = 0; i < m; i++){
        int x, y;
        cin>>x>>y;
        s.unite(x,y);
    }
    for(int i = 1; i <= n; i++){
        int source = s.cauta(i);
        fr[source]++;
    }
    for(int i = 1 ; i<= n; i++){
        sol += fr[i]*(fr[i]-1)/2;
    }
    long long int afi = sol - m;
    cout<<afi;
    return 0;
}
