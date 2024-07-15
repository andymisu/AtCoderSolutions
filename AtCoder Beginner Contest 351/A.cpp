#include <bits/stdc++.h>
using namespace std;

int main() {
    int s = 0;
    for(int i = 0; i < 9; i++){
        int x;
        cin>>x;
        s += x;
    }
    for(int i = 0; i < 8; i++){
        int x;
        cin>>x;
        s -= x;
    }
    s++;
    cout<<s;
    return 0;
}
