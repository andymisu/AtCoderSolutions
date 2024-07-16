#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].first.first>>v[i].first.second;
        v[i].second = i;
    }
    sort(v.rbegin(),v.rend());
    vector<int> sol;
    int minim = INT_MAX;
    for(auto it:v){
        if(it.first.second < minim){
            minim = it.first.second;
            sol.push_back(it.second);
        }
    }
    sort(sol.begin(),sol.end());
    int l = sol.size();
    cout<<l<<endl;
    for(int i = 0; i < l ;i++){
        cout<<sol[i]+1<<" ";
    }
    return 0;
}
