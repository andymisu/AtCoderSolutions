#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    int sol = n;
    vector<bool> fr(n+1,1);
    for(int i = 0; i < q; i++){
        int x;
        cin>>x;
        if(fr[x] == 1){
            sol--;
            fr[x] = 0;
        }else{
            sol++;
            fr[x] = 1;
        }
    }
    cout<<sol;
    return 0;
}
