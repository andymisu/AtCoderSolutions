#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, y;
    cin>>n>>x>>y;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i]>>b[i];
    }
    vector<vector<vector<int>>> dp(n + 1, vector(n + 1, vector<int>(x + 1, 1e9)));
    dp[0][0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= x; k++) {
                dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
                if (k + a[i] <= x) {
                    dp[i + 1][j + 1][k + a[i]] = min(dp[i + 1][j + 1][k + a[i]], dp[i][j][k] + b[i]);
                }
            }
        }
    }
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j <= x; j++) {
            if (dp[n][i][j] <= y) {
                cout<<min(i + 1, n);
                return 0;
            }
        }
    }
}
