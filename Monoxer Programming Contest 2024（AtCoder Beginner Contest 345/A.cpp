#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.length();
    string t = '<' + string(n-2,'=') + '>';
    if(t == s){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
