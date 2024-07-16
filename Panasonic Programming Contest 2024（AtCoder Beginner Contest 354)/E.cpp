#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0 ; i < n; i++){
        cin>>v[i].first>>v[i].second;
    }
    vector<int> dp(1 << n, 0);
    for(int i = 1 ; i < (1 << n); i++){
        bool bit = false;
        for(int j = 0; j < n; j++){
            if((i >> j) & 1) {
                for (int k = j + 1; k < n; k++) {
                    if ((i >> k) & 1) {
                        if(v[j].first == v[k].first || v[j].second == v[k].second) {
                            int sub = i ^ (1 << j) ^ (1 << k);
                            if (dp[sub] == 0) {
                                bit = true;
                            }
                        }
                    }
                }
            }
        }
        dp[i] = bit;
    }
    if(dp.back()){
        cout<<"Takahashi";
    }else{
        cout<<"Aoki";
    }
    return 0;
}
