#include <bits/stdc++.h>
using namespace std;
int v[8];
int sol[8];
int n ,k;
void solve(int l){
    if(l == n){
        int s = 0;
        for(int i = 0; i < n;i++){
            s += sol[i];
        }
        if(s % k == 0){
            for(int i = 0; i < n; i++){
                cout<<sol[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int i = 1; i <= v[l];i++){
        sol[l] = i;
        solve(l+1);
    }
}
int main() {
    cin>>n>>k;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    solve(0);
    return 0;
}
