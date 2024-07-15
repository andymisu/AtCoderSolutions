#include <bits/stdc++.h>
using namespace std;
int mod = 1e8;
int main() {
    int n;
    cin>>n;
    long long s = 0;
    vector<long long> v(n);
    for(int i = 0 ; i < n; i++){
        cin>>v[i];
        s += v[i];
    }
    sort(v.begin(),v.end());
    long long cnt = 0;
    int window = n;
    for(int i = 0; i < n; i++){
        window = max(window, i + 1);
        while(window - 1 > i  && v[window-1] + v[i] >= mod){
            window--;
        }
        cnt += n - window;
    }
    cout<<s*(n-1)-cnt*mod;
    return 0;
}
