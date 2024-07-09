#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,t;
    cin>>n>>t;
    map<long long,long long> H;
    H[0] = n;
    vector<long long> v(n+1,0);
    for(long long i = 0; i < t; i++){
        long long x, y;
        cin>>x>>y;
        H[v[x]+y]++;
        H[v[x]]--;
        if(H[v[x]] == 0){
            H.erase(v[x]);
        }
        v[x] += y;
        cout<<H.size()<<endl;
    }
    return 0;
}
