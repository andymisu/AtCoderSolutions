#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,a;
    cin>>n>>t>>a;
    if(t > a + (n - t - a) || a > t + (n - t - a)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
