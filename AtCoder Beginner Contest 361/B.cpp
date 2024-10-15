#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,x2,y1,y2,z1,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    int a1,a2,b1,b2,c1,c2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    if((x2 > a1 && a2 > x1) && (y2 > b1 && b2 > y1) && (z2 > c1 && c2 > z1)){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}
