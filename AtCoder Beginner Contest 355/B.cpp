#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    map <int,char> H;
    cin>>n>>m;
    for(int i = 0 ;i < n; i++){
        int x;
        cin>>x;
        H[x] = 'A';
    }
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        H[x] = 'B';
    }
    char prev = '0';
    for(auto it : H){
        if(it.second == prev && it.second == 'A'){
            cout<<"Yes";
            return 0;
        }else{
            prev = it.second;
        }
    }
    cout<<"No";
    return 0;
}
