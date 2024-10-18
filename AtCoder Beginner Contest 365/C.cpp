#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    vector<long long> v(n);
    long long s = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        s += v[i];
    }
    if(s <= m){
        cout<<"infinite";
        return 0;
    }
    int left = 0;
    int right = 1e9;
    while(abs(left - right) > 1){
        int mid = (left + right) / 2;
        s = 0;
        for(int i = 0; i < n; i++){
            if(mid > v[i]){
                s += v[i];
            }else{
                s += mid;
            }
        }
        if(s > m){
            right = mid;
        }else{
            left = mid;
        }
    }
    cout<<left;
    return 0;
}
