#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,y;
    cin>>x;
    y = x;
    for(int i = 1; i < n; i++){
        cin>>x;
        cout<<x*y<<" ";
        y = x;
    }
    return 0;
}
