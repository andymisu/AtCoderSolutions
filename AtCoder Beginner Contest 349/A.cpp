#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int s = 0;
    for(int i = 0; i < n-1 ;i++){
        int x;
        cin>>x;
        s += x;
    }
    cout<<s * (-1);
    return 0;
}
