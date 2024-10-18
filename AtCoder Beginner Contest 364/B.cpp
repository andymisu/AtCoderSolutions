#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin>>c;
            if(c == '.'){
                v[i][j] = 0;
            }else if(c == '#'){
                v[i][j] = 1;
            }
        }
    }
    string s;
    x--;
    y--;
    cin>>s;
    for(auto ch : s){
        if(ch == 'L'){
            if(y > 0 && v[x][y-1] == 0){
                y--;
            }
        }
        if(ch == 'R'){
            if(y < m - 1 && v[x][y+1] == 0){
                y++;
            }
        }
        if(ch == 'D'){
            if(x < n - 1 && v[x+1][y] == 0){
                x++;
            }
        }
        if(ch == 'U'){
            if(x > 0 && v[x-1][y] == 0){
                x--;
            }
        }
    }
    cout<<x+1<<" "<<y+1;
    return 0;
}
