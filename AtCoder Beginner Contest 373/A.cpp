#include <bits/stdc++.h>
using namespace std;
int main() {
    int sol = 0;
    for(int i = 0; i < 12; i++){
        string s;
        cin>>s;
        int l = s.length();
        if(l == i+1){
           sol++;
        }
    }
    cout<<sol;
    return 0;
}
