#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    map<char,int> H;
    int l = s.length();
    for(int i = 0; i < l; i++){
        H[s[i]] = i;
    }
    int sol = 0;
    for(char c = 'B'; c <= 'Z'; c++){
       sol += abs(H[c] - H[char(c-1)]);
    }
    cout<<sol;
    return 0;
}
