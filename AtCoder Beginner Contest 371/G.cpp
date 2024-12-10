//TLE
#include <bits/stdc++.h>
using namespace std;
vector<int> trans(vector<int> v,vector<int> p, int n){
    vector<int> aux(n);
    for(int i = 0; i < n; i++){
        aux[i] = v[p[i]];
    }
    return aux;
}


int main() {
    int n;
    cin>>n;
    vector<int> p(n);
    vector<int> v(n);
    set<vector<int>> s;
    for(int i = 0; i < n; i++){
        cin>>p[i];
        p[i]--;
    }
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int> sol(n);
    sol = v;
    while(!s.contains(v)){
        s.insert(v);
        v = trans(v,p,n);
        if(v < sol){
            sol = v;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}
