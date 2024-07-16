#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");
int mod = 998244353;
int num_cif(unsigned long long int x){
    int ret = 0;
    while(x) {
        x /= 10;
        ret++;
    }
    return ret;
}

int main() {
    int n;
    cin>>n;
    vector<unsigned long long int> v(n);
    unsigned long long int s = 0;
    vector<int> fr(11);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<unsigned long long int> power10(11,1);
    for(int i = 1; i <= 10; i++){
        power10[i] = power10[i-1]*10;
        power10[i] %= mod;
    }
    for(int i = n-1; i >= 0; i--){
        int num = num_cif(v[i]);
        v[i] %= mod;
        fr[num]++;
        s += v[i] * i;
        s %= mod;
        for(int j = 1; j <= 10; j++) {
            unsigned long long int calc;
            if(j == num){
                calc = fr[j] - 1;
            }else{
                calc = fr[j];
            }
            unsigned long long int sadd = (power10[j] * v[i])%mod;
            s += sadd * calc;
            s %= mod;
        }
    }
    cout<<s;
    return 0;
}
