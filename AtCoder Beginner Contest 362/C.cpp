#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long r = 0;
    long long l = 0;
    vector<pair<long long,long long>> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
        l += v[i].first;
        r += v[i].second;
    }
    if(l > 0 || r < 0){
        cout<<"No";
        return 0;
    }
    cout<<"Yes"<<endl;
    l *= -1;
    for(int i = 0; i < n; i++){
        if(l == 0){
            cout<<v[i].first<<" ";
        }else{
            if(l > v[i].second - v[i].first){
                cout<<v[i].second<<" ";
                l -= v[i].second - v[i].first;
            }else{
                cout<<v[i].first + l<<" ";
                l = 0;
            }
        }
    }
    return 0;
}
