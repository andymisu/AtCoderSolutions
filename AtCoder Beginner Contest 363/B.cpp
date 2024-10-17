#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,p;
    cin>>n>>t>>p;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    if(v[p-1] >= t){
        cout<<0;
    }else{
        cout<<t-v[p-1];
    }
    return 0;
}
