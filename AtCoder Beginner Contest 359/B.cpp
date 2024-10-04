#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> fr(n+1);
    int sol = 0;
    for(int i = 1 ; i <= 2 * n; i++){
        int x;
        cin>>x;
        if(fr[x] != 0) {
            if (i - fr[x] == 2) {
                sol++;
                //cout<<x;
            }
        }else{
            fr[x] = i;
        }
    }
    cout<<sol;
    return 0;
}
