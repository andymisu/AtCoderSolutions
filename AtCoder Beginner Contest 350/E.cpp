#include <bits/stdc++.h>
using namespace std;
map<unsigned long long,long double> H;
long double solve(unsigned long long int n,unsigned long long int a,unsigned long long int x,unsigned long long int y){
    if(n == 0){
        return 0;
    }
    if(H.count(n) == 0){
        H[n]  = min(x * 1.0 + solve(n/a, a,x,y), 6.0/5 * y + 1.0/5 * solve(n/2,a,x,y) + 1.0/5 * solve(n/3,a,x,y) + 1.0/5 * solve(n/4,a,x,y) + 1.0/5 * solve(n/5,a,x,y) + 1.0/5 * solve(n/6,a,x,y)  );
    }
    return H[n];
}
int main() {
    unsigned long long int n,a,x,y;
    cin>>n>>a>>x>>y;
    cout<<fixed<<setprecision(6)<<solve(n,a,x,y);
    return 0;
}
