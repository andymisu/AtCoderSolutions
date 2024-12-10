#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    set<pair<int,int>> edge_G, edge_H;
    int mg;
    cin>>mg;
    for(int i = 0; i < mg; i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        edge_G.insert({x,y});
        edge_G.insert({y,x});
    }

    int mh;
    cin>>mh;
    for(int i = 0; i < mh; i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        edge_H.insert({x,y});
        edge_H.insert({y,x});
    }
    vector<vector<int>> a(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            cin>>a[i][j];
            a[j][i] = a[i][j];
        }
    }

    vector<int> v(n);
    iota(v.begin(),v.end(),0);

    int sol = INT_MAX;

    do{
        int s = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i ; j++){
                s += a[i][j] * (edge_G.contains({v[i],v[j]}) != edge_H.contains({i,j}));
            }
        }
        sol = min(sol,s);
    }while(ranges::next_permutation(v).found);
    cout<<sol;
    return 0;
}
