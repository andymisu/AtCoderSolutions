#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int main() {
    int h,w;
    cin>>h>>w;
    vector<vector<int>> map(h,vector<int>(w,-2));
    vector<vector<int>> energy(h,vector<int>(w));
    int istart,istop,jstart,jstop;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char c;
            cin>>c;
            if(c == '#'){
                map[i][j] = -1;
            }
            if(c == 'S'){
                istart = i;
                jstart = j;
            }
            if(c == 'T'){
                jstop = j;
                istop = i;
            }
        }
    }
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x,y,c;
        cin>>x>>y>>c;
        energy[x-1][y-1] = c;
    }
    priority_queue<tuple<int,int,int>> coord;
    coord.push({0,istart,jstart});
    map[istart][jstart] = energy[istart][jstart];
    while(coord.empty() == 0){
        auto [gunoi,icurr,jcurr] = coord.top();
        coord.pop();
        if(map[icurr][jcurr] < energy[icurr][jcurr]){
            map[icurr][jcurr] = energy[icurr][jcurr];
            energy[icurr][jcurr] = 0;
        }
        if(icurr == istop && jcurr == jstop){
            cout<<"Yes";
            return 0;
        }
        for(int i = 0 ; i < 4; i++){
            if(map[icurr][jcurr] > 0 && icurr + dx[i] < h && icurr + dx[i] >= 0 && jcurr + dy[i] < w && jcurr + dy[i] >= 0 && map[icurr+dx[i]][jcurr+dy[i]] != -1){
                if(map[icurr][jcurr]-1 > map[icurr + dx[i]][jcurr + dy[i]]){
                    map[icurr + dx[i]][jcurr + dy[i]] = map[icurr][jcurr]-1;
                    coord.push({map[icurr + dx[i]][jcurr + dy[i]], icurr + dx[i],jcurr + dy[i]});
                }
            }
        }
    }
    cout<<"No";
    return 0;
}
