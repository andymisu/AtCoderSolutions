#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> v(n);
    int maxi = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        int l = v[i].length();
        if(l > maxi){
            maxi = l;
        }
    }
    vector<string> sol(maxi);
    for(int i = 1; i <= maxi; i++) {
        for (int j = n - 1; j >= 0; j--) {
            int l = v[j].length();
            if (l >= i) {
                sol[i - 1].push_back(v[j][i - 1]);
            } else {
                sol[i - 1].push_back('*');
            }
        }
    }
    for(int i = 0; i < maxi; i++){
        int pos = 0;
        int l = sol[i].length();
        for(int j = 0; j < l;j++){
            if(sol[i][j] != '*'){
                pos = j;
            }
        }
        for(int j = 0; j <= pos;j++){
            cout<<sol[i][j];
        }
        cout<<endl;
    }
    return 0;
}
