#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    int pos = 0;
    int l = s.length();
    for(int i = 0 ; i < l; i++){
        char c = char((int)t[pos] + 32);
        if(s[i] == c){
            pos++;
            if(pos == 3){
                cout<<"Yes";
                return 0;
            }
        }
    }
    if(pos == 2 && t[2] == 'X'){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}
