#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<long long> same[2];
    vector<long long> dif[2];
    cin>>n;
    for(int i = 0; i < n; i++){
        long long x,y;
        cin>>x>>y;
        if((x+y)%2==0){
            same[0].push_back(x+y);
            same[1].push_back(x-y);
        }
        else{
            dif[0].push_back(x+y);
            dif[1].push_back(x-y);
        }
    }
    long long sol = 0;
    for(int i = 0; i < 2; i++){
        long long sz;
        sort(same[i].begin(), same[i].end());
        sort(dif[i].begin(), dif[i].end());
        sz = same[i].size();
        for(int j = 0 ; j < sz; j++){
            sol += same[i][j] * (2*j + 1 - sz);
        }
        sz = dif[i].size();
        for(int j = 0 ; j < sz; j++){
            sol += dif[i][j] * (2*j + 1 - sz);
        }
    }
    cout<<(sol/2);
    return 0;
}
