#include <bits/stdc++.h>
using namespace std;
long long gauss(long long x){
    return x * (x+1)/2;
}
int main() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    unsigned long long sol = n;
    long long prev = 0;
    for(long long i = 1; i < n-1; i++){
        if(v[i] - v[i-1] != v[i+1] - v[i]){
            sol += gauss(i-prev);
            prev = i;
        }
    }
    sol += gauss(n-1-prev);
    cout<<sol;
    return 0;
}
