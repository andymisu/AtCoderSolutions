#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        max1 = max(max1,x);
    }
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        max2 = max(max2,x);
    }
    cout<<max1+max2;
    return 0;
}

