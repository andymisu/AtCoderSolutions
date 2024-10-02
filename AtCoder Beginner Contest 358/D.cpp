#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    map<int,int> H;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        H[x]++;
    }
    unsigned long long int sol = 0;
    int ok = 1;
    sort(v.begin(),v.end());
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        auto it = H.lower_bound(x);
        if(it != H.end()) {
            if (it->second != 0) {
                sol += it->first;
                H[it->first]--;
            }
            if (H[it->first] == 0) {
                H.erase(it);
            }
        }else{
            ok = 0;
        }
    }
    if(ok == 1){
        cout<<sol;
    }else{
        cout<<-1;
    }
    return 0;
}
