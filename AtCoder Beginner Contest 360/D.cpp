#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");
int main() {
    int n,t;
    cin>>n>>t;
    map<int,int> H0;
    map<int,int> H1;
    string s;
    cin>>s;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        if(s[i] == '1'){
            H1[x] = 0;
        }else{
            H0[x] = 0;
        }
    }
    int k = 0;
    for(auto it : H1){
        H1[it.first] = k;
        k++;
    }
    k = 0;
    for(auto it : H0){
        H0[it.first] = k;
        k++;
    }
    long long sol = 0;
    for(auto it1 : H1){
        auto it21 = H0.lower_bound(it1.first);
        auto it22 = H0.upper_bound(it1.first + 2*t);
        it22--;
        if(it22 != H0.end() && it21 != H0.end()) {
            sol += (it22->second - it21->second + 1);
        }else if(it22 == H0.end() && it21 != H0.end()){
            it22--;
            if(it22->first - t < it1.first + t) {
                sol += (it22->second - it21->second + 1);
            }
        }
    }
    cout<<sol;
    return 0;
}
