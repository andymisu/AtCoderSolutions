#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,x, y, z;
    cin>>n>>x>>y>>z;
    if((x < z && z < y) ||(y < z && z < x)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
