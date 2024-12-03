#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
        a[i]--;
    }
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin>>b[i];
        b[i]--;
    }
    vector<long long> hash(n);
    vector<long long> vA(n+1,0);
    vector<long long> vB(n+1,0);

    const long long mod =  (1LL << 61) - 1;

    random_device rd;
    uniform_int_distribution<int> dist(1,mod-1);
    for(int i = 0; i < n; i++){
        hash[i] = dist(rd);
    }

    for(int i = 0; i < n; i++){
        vA[i+1] = (vA[i] + hash[a[i]]) % mod;
        vB[i+1] = (vB[i] + hash[b[i]]) % mod;
    }
    for(int i = 0; i < q; i++){
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int hashA = (vA[r] - vA[l-1] + mod) % mod;
        int hashB = (vB[R] - vB[L-1] + mod) % mod;
        if(hashA == hashB){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
