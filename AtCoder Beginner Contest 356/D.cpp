#include<bits/stdc++.h>
#define MOD 998244353
using namespace std;
long long op(long long j,long long n){
    long long p2 = (1ll << j);
    long long k = n / (2 * p2);
    long long res = k * p2;
    long long l = n % (2 * p2);
    if(l>=p2){
        res+=(l-p2+1);
    }
    return res;
}
int main(){
    long long n, m;
    cin>>n>>m;
    long long sol = 0;
    for(long long i = 0; i < 60; i++){
        if(m&(1ll<<i)){
            sol += op(i,n);
            sol %= MOD;
        }
    }
    cout<<sol;
    return 0;
}
