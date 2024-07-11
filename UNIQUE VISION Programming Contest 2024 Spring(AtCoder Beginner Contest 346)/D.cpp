#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<long long>> dp1 (n,vector<long long>(2,1000000001));
    vector<vector<long long>> dp2 (n,vector<long long>(2,1000000001));
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    dp1[0][s[0] - '0'] = 0;
    dp1[0][(s[0] - '0') ^ 1] = v[0];

    for(int i = 1; i < n; i++){
        int r = s[i] - '0';
        for(int k = 0; k < 2; k++){
            dp1[i][k] = dp1[i - 1][k ^ 1] + (r == k ? 0 : v[i]);
            dp2[i][k] = min(dp1[i - 1][k], dp2[i - 1][k ^ 1]) + (r == k ? 0 : v[i]);
           // cout<<dp1[i][k]<<" "<<dp2[i][k]<<endl;
        }
    }
    cout<<min(dp2[n - 1][0], dp2[n - 1][1]);
    return 0;
}
