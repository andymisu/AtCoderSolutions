#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w,n;
    cin>>h>>w>>n;
    vector<vector<bool>> grid(h,vector<bool>(w));
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        grid[x][y] = 1;
    }
    vector<vector<int>> dp(h,vector<int>(w));
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        auto first = q.front();
        q.pop();

        int x = first.first;
        int y = first.second;
        if(x+1 < h){
            if(grid[x+1][y] == 1){
                dp[x+1][y] = max(dp[x][y]+1,dp[x+1][y]);
            }else{
                dp[x+1][y] = max(dp[x][y], dp[x+1][y]);
            }
            q.push({x+1,y});
        }

        if(y+1 < w){
            if(grid[x][y+1] == 1){
               dp[x][y+1] = max(dp[x][y]+1, dp[x][y+1]);
            }else{
               dp[x][y+1] = max(dp[x][y], dp[x][y+1]);
            }
            q.push({x,y+1});
        }
    }
    cout<<dp[h-1][w-1]<<endl;
    string s;
    int x = h-1, y = w-1;
    while(x != 0 || y != 0){
        if(x > 0){
            if(y > 0){
                if(dp[x-1][y] > dp[x][y-1]){
                    s.push_back('D');
                    x--;
                }else{
                    s.push_back('R');
                    y--;
                }
            }else{
                s.push_back('D');
                x--;
            }
        }else{
            s.push_back('R');
            y--;
        }
    }
    std::reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
