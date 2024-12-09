#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r;
    cin>>l>>r;
    if(l*r == 1 || l + r == 0){
        cout<<"Invalid";
    }else if(l == 1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
