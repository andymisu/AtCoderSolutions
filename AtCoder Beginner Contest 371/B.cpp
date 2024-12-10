#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<bool> fr(n);
    for(int i = 0; i < m; i++){
        int x;
        char c;
        cin>>x>>c;
        x--;
        if(c == 'M'){
            if(fr[x] == 0){
                fr[x] = 1;
                cout<<"Yes";
            }else{
                cout<<"No";
            }
        }else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}
