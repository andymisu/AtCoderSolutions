#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    map<char,int> H;
    cin>>s;
    int n = s.length();
    long long int sol = 0;
    int ok = 0;
    for(int i = 0; i < n; i++){
       sol = sol + i - H[s[i]];
       H[s[i]]++;
       if(H[s[i]] > 1){
           ok = 1;
       }
    }
    if(sol == 0){
        cout<<1;
    }else{
        cout<<sol + ok;
    }

    return 0;
}
