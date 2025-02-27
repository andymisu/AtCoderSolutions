#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l = s.length();
    if(s[l-1] == 'n' && s[l-2] == 'a' && s[l-3] == 's'){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
