#include <bits/stdc++.h>
using namespace std;

int main() {
    char c[101];
    cin>>c;
    int n = strlen(c);
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(c[i] == '|'){
            ok++;
        }
        if(ok % 2 == 0 && c[i] != '|'){
            cout<<c[i];
        }
    }
    return 0;
}
