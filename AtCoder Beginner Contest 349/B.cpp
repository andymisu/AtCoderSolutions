#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    map<char,int> H;
    int l = s.length();
    int maxi = 0;
    for(int i = 0; i < l ; i++){
        H[s[i]]++;
        if(H[s[i]]>maxi){
            maxi = H[s[i]];
        }
    }
    for(int i = 1; i <= maxi;i++){
        int k = 0;
        for(auto it : H){
            if(it.second == i){
                k++;
            }
        }
        if(k != 0  && k != 2){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
