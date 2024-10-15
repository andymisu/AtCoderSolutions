#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,x;
    cin>>n>>k>>x;
    bool ok = false;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        if(i == k){
            cout<<x<<" ";
            ok = true;
        }
        cout<<a<<" ";
    }
    if(ok == false){
        cout<<x;
    }
    return 0;
}
