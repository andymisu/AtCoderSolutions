#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0 ; i < n; i++){
        cin>>A[i];
    }

    int m;
    cin>>m;
    vector<int> B(m);
    for(int i = 0; i < m; i++){
        cin>>B[i];
    }

    int l;
    cin>>l;
    vector<int> C(l);
    for(int i = 0; i < l; i++){
        cin>>C[i];
    }


    vector<bool> dp(3 * 1e8, false);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < l; k++){
                dp[A[i] + B[j] + C[k]] = true;
            }
        }
    }

    int q;
    cin>>q;
    int x;
    for(int i = 0; i < q; i++){
        cin>>x;
        if(dp[x] == true){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
