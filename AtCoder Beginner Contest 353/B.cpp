#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int s = 0;
    int sol = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(s + x > k){
            s = 0;
            sol++;
        }
        s+=x;
    }
    if(s != 0){
        sol ++;
    }
    cout<<sol;
    return 0;
}
