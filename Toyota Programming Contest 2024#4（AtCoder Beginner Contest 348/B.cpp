#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i = 0; i < n; i++){
        int ind;
        int max = 0;
        for(int j = 0; j < n; j++){
            if( (v[i].first - v[j].first) * (v[i].first - v[j].first) + (v[i].second - v[j].second) * (v[i].second - v[j].second) > max){
                max = (v[i].first - v[j].first) * (v[i].first - v[j].first) + (v[i].second - v[j].second) * (v[i].second - v[j].second);
                ind = j;
            }
        }
        cout<<ind + 1<<endl;
    }
    return 0;
}
