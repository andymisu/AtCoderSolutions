#include <bits/stdc++.h>
using namespace std;
//dp[i][j] nivel maxim fericire unde avem produse cu greutate maxima i si greutatea totala j
bool cmp(pair<int,int> x, pair<int,int> y){
    return x.second < y.second;
}
int main() {
    int n,w;
    cin>>n>>w;
    vector<vector<int>> v(w+1);
    for(int i = 0; i < n; i++){
        int x,y;
       cin>>x>>y;
       v[x].push_back(y);
    }

    vector<long long> dp(w+1, -1e18);
    dp[0] = 0;

    for(int i = 1; i < w; i++){
        if(!v[i].empty()){
            priority_queue<int> q;

            for(int val : v[i]){
                q.push(val-1);
            }

            vector<long long> happiness(w/i + 1);

            for(int k = 0; k < w/i; k++){
                int top = q.top();
                q.pop();
                happiness[k+1] = happiness[k] + top;
                q.push(top-2);
            }

            for(int j = w; j >= 0; j--){
                int k = 1;
                while(j + k*i <= w){
                    dp[j + k*i] = max(dp[j + k*i], dp[j] + happiness[k]);
                    k++;
                }
            }
        }
    }
    cout<<*max_element(dp.begin(),dp.end());
    return 0;
}
