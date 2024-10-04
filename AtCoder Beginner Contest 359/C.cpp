#include <bits/stdc++.h>
using namespace std;

int main() {
    long long sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    if((sx + sy) % 2 == 1){
        --sx;
    }
    if((tx + ty) % 2 == 1){
        --tx;
    }

    long long distx = abs(sx - tx);
    long long disty = abs(sy - ty);

    cout<<(disty + max(disty, distx)) / 2;
    return 0;
}
