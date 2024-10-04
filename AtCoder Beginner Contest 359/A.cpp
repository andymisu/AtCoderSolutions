#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n;
    int sol = 0;
    for(int i = 0; i < n; i++){
        cin>>s;
        if(s == "Takahashi"){
            sol++;
        }
    }
    cout<<sol;
    return 0;
}
