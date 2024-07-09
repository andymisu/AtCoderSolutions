#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>x;
            if(x == 1){
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
