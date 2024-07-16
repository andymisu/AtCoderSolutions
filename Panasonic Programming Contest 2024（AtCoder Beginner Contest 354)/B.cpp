#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<string, int> H;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        string s;
        int x;
        cin>>s;
        cin>>x;
        H[s] = x;
        sum += x;
    }
    int mod = sum % n;
    int ind = 0;
    for(auto it : H){
        if(ind == mod){
            cout<<it.first;
            return 0;
        }
        ind++;
    }
    return 0;
}
