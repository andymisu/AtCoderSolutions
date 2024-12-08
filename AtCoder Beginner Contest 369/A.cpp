#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a == b){
        cout<<1;
    }else if(abs(a-b) % 2 == 1){
        cout<<2;
    }else{
        cout<<3;
    }
    return 0;
}
