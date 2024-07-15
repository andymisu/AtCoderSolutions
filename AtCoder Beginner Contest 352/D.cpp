#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    map<int,int> H;
    for(int i = 0; i < n ;i++){
        int x;
        cin>>x;
        H[x] = i;
    }
    map<int,int> SOL;
    for(int i = 1; i <= k; i++){
        SOL[H[i]] = i;
    }
    auto b = SOL.begin();
    auto e = SOL.end();
    e--;
    int sol = e->first - b->first;
    for(int i = k + 1; i <= n; i++){
        SOL.erase(H[i-k]);
        SOL[H[i]] = i;
        b = SOL.begin();
        e = SOL.end();
        e--;
        if(sol > e->first - b->first){
            sol = e->first - b->first;
        }

    }
    cout<<sol;
    return 0;
}
