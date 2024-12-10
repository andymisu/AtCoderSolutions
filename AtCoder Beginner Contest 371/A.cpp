#include <bits/stdc++.h>
using namespace std;

int main() {
    char c1,c2,c3;
    cin>>c1>>c2>>c3;
    if(c1 != c2){
        cout<<"A";
    }else if(c1 == c3){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}
