#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string t;
    cin>>s>>t;
    int ls = s.length();
    for(int w = 1 ; w < ls; w++){
        for(int c = 0; c < w; c++){
            string part;
            for(int i = c; i < ls; i += w){
                part.push_back(s[i]);
            }
            if(part == t){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}
