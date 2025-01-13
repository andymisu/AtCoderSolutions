#include <bits/stdc++.h>
using namespace std;

bool verify(int pos, string s,int n){
    if(pos + 2 < n && s[pos] == 'A' && s[pos+1] == 'B' && s[pos+2] == 'C'){
        return 1;
    }
    if(pos + 1 < n && s[pos-1] == 'A' && s[pos] == 'B' && s[pos+1] == 'C'){
        return 1;
    }
    if(s[pos-2] == 'A' && s[pos-1] == 'B' && s[pos] == 'C'){
        return 1;
    }
    return 0;
}

int main() {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0;i < n - 2; i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
           count++;
        }
    }
    for(int i = 0; i < q; i++){
        int pos;
        char c;
        cin>>pos>>c;
        pos--;
        if(s[pos] != c) {
            if (verify(pos, s, n) == 1) {
                count--;
            }
            s[pos] = c;
            if (verify(pos, s, n) == 1) {
                count++;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}
