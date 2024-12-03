#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(auto &nx : a){
        cin>>nx;
    }
    vector<int> r(1);
    for(int i = 0; i < 2*n; i++){
        r.push_back((r.back()+a[i%n])%m);
    }
    vector<int> b(m,0);
    for(int i = 0; i < n; i++){
        b[r[i]]++;
    }
    long long res=0;
    for(int i=n;i<2*n;i++){
        b[r[i-n]]--;
        res+=b[r[i]];
        b[r[i]]++;
    }
    cout << res << "\n";
    return 0;
}
