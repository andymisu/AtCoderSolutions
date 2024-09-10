#include <bits/stdc++.h>
using namespace std;
int print = 0;
int verif(int m,int k,vector<int> gb,vector<vector<int>> v,vector<int> sol){
   for(int i = 0; i < m; i++){
       int ok = 0;
       for(auto it : v[i]){
           //cout<<sol[it]<<" ";
           if(sol[it] == 1){
               ok++;
           }
       }
       //cout<<endl;
       if(gb[i] == -1 && ok >= k){
           return 0;
       }
       if(gb[i] == 1 && ok < k){
           return 0;
       }
   }
   return 1;
}

void bkt(int n,int m,int cnt,vector<int> &sol,int k,vector<int> gb, vector<vector<int>> v){
    sol[cnt] = 1;
    if(cnt < n){
        bkt(n,m,cnt + 1,sol,k,gb,v);
    }
    if(cnt == n && verif(m,k,gb,v,sol)){
        print++;
    }
    sol[cnt] = -1;
    if(cnt < n){
        bkt(n,m,cnt + 1,sol,k,gb,v);
    }
    if(cnt == n && verif(m,k,gb,v,sol)){
        print++;
    }
}
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> v(m);
    vector<int> gb(m);
    for(int i = 0; i < m; i++){
        int c;
        cin>>c;
        for(int j = 0; j < c; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        char t;
        cin>>t;
        if(t == 'o'){
            gb[i] = 1;
        }else{
            gb[i] = -1;
        }
    }
    vector<int> sol(n+1);
    bkt(n,m,1,sol,k,gb,v);
    cout<<print;
    return 0;
}
