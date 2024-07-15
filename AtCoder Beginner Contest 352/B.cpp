#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string sir;
    cin>>sir;
    int n = s.length();
    int m = sir.length();
    int poz = 0;
    for(int i = 0; i < n; i++){
        int ok = 0;
        for(int j = poz; j < m && ok == 0; j++){
            if(s[i] == sir[j]){
                ok = 1;
                cout<<j+1<<" ";
                poz = j+1;
            }
        }
    }
    return 0;
}
