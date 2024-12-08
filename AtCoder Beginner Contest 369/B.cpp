#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sol = 0;
    int L = -1;
    int R = -1;
    for(int i = 0; i < n; i++){
        int x;
        char c;
        cin>>x>>c;
        if(c == 'L'){
            if(L != -1){
                sol += abs(x-L);
            }
            L = x;
        }
        if(c == 'R'){
            if(R != -1){
                sol += abs(x-R);
            }
            R = x;
        }
    }
    cout<<sol;
    return 0;
}
