#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin>>v[i];
        }
        vector<pair<int,vector<vector<int>>>> dp(n,{1, {{}}});
        for (int i = 0; i < n; ++i) {
            dp[i].second[0].push_back(i + 1);
        }
        int LIS = 1;
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (v[j] < v[i]) {
                    if (dp[j].first + 1 > dp[i].first) {
                        dp[i].first = dp[j].first + 1;
                        dp[i].second.clear();
                        for (auto it: dp[j].second) {
                            vector<int> aux = it;
                            aux.push_back(i + 1);
                            dp[i].second.push_back(aux);
                        }
                    } else if (dp[j].first + 1 == dp[i].first) {
                        for (auto it: dp[j].second) {
                            vector<int> aux = it;
                            aux.push_back(i + 1);
                            dp[i].second.push_back(aux);
                        }
                    }
                }
            }
            LIS = max(LIS, dp[i].first);
        }
        set<int> resultSet;
        for (int i = 0; i < n; ++i) {
            if (dp[i].first == LIS) {
                for (auto& seq : dp[i].second) {
                    for (auto node : seq) {
                        resultSet.insert(node);
                    }
                }
            }
        }
        int size = resultSet.size();
        cout<<size<<endl;
        for (auto node : resultSet) {
            cout<<node<<" ";
        }
        cout<<endl;
    }
    return 0;
}
