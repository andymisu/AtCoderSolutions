#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cin>>v[i][j];
            v[i][j]--;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (ans >= i){
            ans = v[ans][i];
        }else{
            ans = v[i][ans];
        }
    }
    ans++;
    cout<<ans;
}
