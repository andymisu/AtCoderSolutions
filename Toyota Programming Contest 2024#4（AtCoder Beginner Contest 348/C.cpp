#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> H;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        if(H.count(y) != 0){
            if(H[y] > x) {
                H[y] = x;
            }
        }else{
            H[y] = x;
        }
    }
    int sol = 0;
    for(auto it : H){
        if(it.second > sol){
            sol = it.second;
        }
    }
    cout<<sol;
    return 0;
}
