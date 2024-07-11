#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int x;
    int mod;
    cin>>n;
    cin>>mod;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x % mod == 0){
            cout<<x / mod<<" ";
        }
    }
    return 0;
}
