#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w,q;
    cin>>h>>w>>q;
    vector<vector<int>> grid(h,vector<int>(w,1));
    long long sol = h * w;
    vector<pair<int,int>> query(q);
    map<pair<int,int>,int> H;
    for(int i = 0; i < q; i++){
        cin>>query[i].first>>query[i].second;
        H[{query[i].first,query[i].second}]++;
    }
    if(H.size() == 1){
        int x = query[0].first;
        int y = query[0].second;
        int mul = H[{x,y}];
        int row,col;
        if(mul > h){
            col = 0;
        }else{
            col = h - mul;
        }
        if(mul > w){
            row = 0;
        }else{
            row = w - mul;
        }
        sol = (h-1)*(w-1) + row + col;
        cout<<sol;
        return 0;
    }
    for(int i = 0; i < q; i++){
        int x,y;
        x = query[i].first;
        y = query[i].second;
        x--;
        y--;
        if(grid[x][y] == 1){
            grid[x][y] = 0;
            sol--;
        }else{
            int a = x, b = y;
            while(a >= 0 && grid[a][b] == 0){
                a--;
            }
            if(a >= 0){
                grid[a][b] = 0;
                sol--;
            }

            a = x;
            b = y;
            while(a < h && grid[a][b] == 0){
                a++;
            }
            if(a < h){
                grid[a][b] = 0;
                sol--;
            }

            a = x;
            b = y;
            while(b < w && grid[a][b] == 0){
                b++;
            }
            if(b < w){
                grid[a][b] = 0;
                sol--;
            }

            a = x;
            b = y;
            while(b >= 0 && grid[a][b] == 0){
                b--;
            }
            if(b >= 0){
                grid[a][b] = 0;
                sol--;
            }
        }
    }
    cout<<sol;
    return 0;
}
