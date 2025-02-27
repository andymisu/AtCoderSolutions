#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    int ls = s.length();
    int lt = t.length();
    int l = min(ls,lt);
    for(int i = 0; i < l; i++){
        if(s[i] != t[i]){
            cout<<i+1;
            return 0;
        }
    }
    if(ls == lt){
        cout<<0;
        return 0;
    }
    if(ls != lt){
        cout<<l+1;
    }
    return 0;
}
