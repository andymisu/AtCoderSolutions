#include <bits/stdc++.h>
using namespace std;
long long sol = INT_MAX;
long long sum;
void bkt(vector<long long> v,int n,int k,int s){
    if(k == n){
        int maxi = 0;
        if(s > sum - s){
            maxi = s;
        }else{
            maxi = sum - s;
        }
        if(sol > maxi){
            sol = maxi;
        }
        return;
    }
    bkt(v,n,k+1,s + v[k]);
    bkt(v,n,k+1,s);
}
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    bkt(v,n,0,0);
    cout<<sol;
    return 0;
}
