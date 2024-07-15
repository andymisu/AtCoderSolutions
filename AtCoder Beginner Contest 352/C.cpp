#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x, y;
    long long sol = 0;
    int dif = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        sol += x;
        if(y - x > dif){
            dif = y - x;
        }
    }
    sol += dif;
    cout<<sol;
    return 0;
}
