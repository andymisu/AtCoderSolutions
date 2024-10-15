#include <bits/stdc++.h>
using namespace std;
ifstream fin("file1.in");
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sol = INT_MAX;
    for(int i = 0; i <= k ; i++){
        sol = min(sol,v[i+(n-k)-1]-v[i]);
    }
    cout<<sol;
    return 0;
}
