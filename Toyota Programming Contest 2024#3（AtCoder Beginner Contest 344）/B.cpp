#include <bits/stdc++.h>
using namespace std;
void solve(int x){
    cin>>x;
    if(x != 0) solve(x);
    cout<<x<<endl;
}
int main() {
    int x;
    solve(-1);
    return 0;
}
