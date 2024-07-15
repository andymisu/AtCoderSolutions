#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin>>h>>w;
    vector<vector<int>> mat(h,vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0 ; j < w; j++){
            char c;
            cin>>c;
            if(c == '#'){
                mat[i][j] = -1;
                if(i > 0){
                    mat[i-1][j] = 1;
                }
                if(i < h -1){
                    mat[i+1][j] = 1;
                }
                if(j > 0){
                    mat[i][j-1] = 1;
                }
                if(j < w - 1){
                    mat[i][j+1] = 1;
                }
            }
        }
    }
    queue<pair<int,int>> q;
    int sol = 0;
    map<pair<int,int>, int> MAP;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(mat[i][j] == 0 && MAP.count({i,j}) == 0){
                int count = 0;
                map<pair<int,int>, int> H;
                q.push({i,j});
                count++;
                H[{i,j}] = 1;
                while(q.empty() == false){
                    auto it = q.front();
                    int x = it.first;
                    int y = it.second;
                    q.pop();
                    if(mat[x][y] != 1) {
                        if (x > 0 && mat[x - 1][y] != -1 && H.count({x - 1, y}) == 0) {
                            q.push({x - 1, y});
                            count++;
                            H[{x-1,y}] = 1;
                        }

                        if (x < h - 1 && mat[x + 1][y] != -1 && H.count({x + 1, y}) == 0) {
                            q.push({x + 1, y});
                            count++;
                            H[{x+1,y}] = 1;
                        }

                        if (y > 0 && mat[x][y - 1] != -1 && H.count({x, y - 1}) == 0) {
                            q.push({x, y-1});
                            count++;
                            H[{x,y-1}] = 1;
                        }

                        if (y < w - 1 && mat[x][y + 1] != -1 && H.count({x, y + 1}) == 0) {
                            q.push({x, y+1});
                            count++;
                            H[{x,y+1}] = 1;
                        }
                    }
                }
                if(count > sol){
                    sol = count;
                }
                for(auto it : H){
                    MAP[it.first] = 1;
                }
            }
        }
    }
    if(sol == 0) {
        cout << 1;
    }else{
        cout<<sol;
    }
    return 0;
}
