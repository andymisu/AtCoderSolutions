#include <bits/stdc++.h>

using namespace std;

int main() {
    int ok = 0;
    string s;
    cin>>s;
    for(int i = 0; i < 3; i++){
        if(s[i] == 'R'){
            ok = 1;
        }
        if(ok == 1 && s[i] == 'M'){
            ok = 2;
        }
    }
    if(ok == 1){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
