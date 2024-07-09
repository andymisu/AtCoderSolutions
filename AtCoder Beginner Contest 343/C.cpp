#include <bits/stdc++.h>
using namespace std;
int pali(unsigned long long n){
    unsigned long long aux = 0;
    unsigned long long m = n;
    while(m){
        aux = (m%10) + aux * 10;
        m /= 10;
    }
    return (aux == n);
}
int main() {
    unsigned long long n;
    cin>>n;
    unsigned long long sol;
    for(unsigned long long i = 0; i * i * i <= n; i++){
        if(pali(i*i*i) == 1){
            sol = i * i * i;
        }
    }
    cout<<sol;
}
