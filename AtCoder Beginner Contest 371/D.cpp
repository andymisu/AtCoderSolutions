#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    map<long long,long long> H;
    cin>>n;
    vector<long long> coord(n);
    vector<long long> pop(n);
    for(long long i = 0; i < n; i++){
        cin>>coord[i];
    }
    for(long long i = 0; i < n; i++){
        cin>>pop[i];
    }
    long long prev = 0;
    for(long long i = 0; i < n; i++){
       H[coord[i]] = prev + pop[i];
       prev = H[coord[i]];
    }

    long long q;
    cin>>q;
    for(long long i = 0 ; i < q; i++){
        long long l,r;
        cin>>l>>r;
        auto left = H.lower_bound(l);
        long long x = left->first;
        if(left == H.end() || x > r){
            cout<<0<<endl;
        }else{
            long long val_left;
            auto right = H.upper_bound(r);
            right--;
            long long val_right = right->second;
            if(left == H.begin()){
                val_left = 0;
            }else{
                left--;
                val_left = left->second;
            }
            cout<<val_right-val_left<<endl;
        }
    }
    return 0;
}
