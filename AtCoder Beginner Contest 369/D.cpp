#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long dpeven = 0;
    long long dpodd = -INFINITY;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        long long aux = dpeven;
        dpeven = max(dpodd + 2*x, dpeven);
        dpodd = max(aux + x, dpodd);
    }
    cout<<max(dpeven,dpodd);
    return 0;
}
