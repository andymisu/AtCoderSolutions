#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<vector<int>> pos(n+1);
    for(int i = 0; i < n; i++){
        cin>>a[i];
        pos[a[i]].push_back(i+1);
    }
    long long sol = 0;
    for(int i = 0; i <= n; i++){
        if(!pos[i].empty()) {
            long long k = n * (n + 1LL) / 2;
            vector<int> p = {0};
            p.insert(p.end(),pos[i].begin(),pos[i].end());
            p.push_back(n+1);
            for(int j = 1; j < p.size(); j++){
                k -= (p[j] - p[j - 1]) * (p[j] - p[j - 1] - 1LL) / 2;
            }
            sol += k;
        }
    }
    cout<<sol;
    return 0;
}
