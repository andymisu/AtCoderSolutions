#include <bits/stdc++.h>
using namespace std;

int main() {
    int xa,xb,xc,ya,yb,yc;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xc>>yc;
    int ab2 = (xb-xa)*(xb-xa) + (yb-ya)*(yb-ya);
    int ac2 = (xc-xa)*(xc-xa) + (yc-ya)*(yc-ya);
    int bc2 = (xb-xc)*(xb-xc) + (yb-yc)*(yb-yc);
    if(ab2 + ac2 == bc2){
        cout<<"Yes";
        return 0;
    }
    if(ab2 + bc2 == ac2){
        cout<<"Yes";
        return 0;
    }
    if(ac2 + bc2 == ab2){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}
