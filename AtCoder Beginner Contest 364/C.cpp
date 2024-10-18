#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,x,y;
    cin>>n>>x>>y;
    vector<int> sweet(n);
    vector<int> salty(n);
    for(int i = 0 ; i < n; i++){
        cin>>sweet[i];
    }
    for(int i = 0; i < n; i++){
        cin>>salty[i];
    }
    sort(sweet.rbegin(),sweet.rend());
    sort(salty.rbegin(),salty.rend());
    int ksweet = 0;
    int ksalty = 0;
    for(int i = 0; i < n; i++){
        ksweet++;
        x -= sweet[i];
        if(x < 0){
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        ksalty++;
        y -= salty[i];
        if (y < 0) {
            break;
        }
    }
    cout<<min(ksalty,ksweet);
    return 0;
}
