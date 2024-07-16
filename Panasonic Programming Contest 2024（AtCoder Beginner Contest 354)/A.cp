#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int h = 1;
    int power = 1;
    int day = 1;
    while(h <= n){
        power *= 2;
        h += power;
        day++;
    }
    cout<<day;
    return 0;
}
