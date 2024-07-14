#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n+1);
    vector<int> pos(n+1);
    for(int i = 1; i <= n; i++){
        cin>>v[i];
        pos[v[i]] = i;
    }
    long long k = 0;
    vector<pair<int,int>> sol;
    for(int i = 1; i <= n; i++){
        if(v[i] != i){
            k++;
            sol.push_back({pos[i],i});
            swap(v[i],v[pos[i]]);
            swap(pos[v[i]], pos[v[pos[i]]]);
        }
    }
    cout<<k<<endl;
    for(auto it : sol){
        cout<<it.second<<" "<<it.first<<endl;
    }
    return 0;
}
