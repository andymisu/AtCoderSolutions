#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    int sol = m;
    for(int i = 0 ; i < m; i++){
        cin>>v[i];
        if(v[i] == 0){
            sol--;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            cin>>x;
            if(v[j] - x <= 0 && v[j] > 0){
                sol--;
            }
            v[j] -= x;
        }
    }
    if(sol == 0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
