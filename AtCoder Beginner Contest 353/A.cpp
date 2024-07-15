#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a;
    cin>>a;
    int sol = -1;
    for(int i = 1; i < n; i++){
        int x;
        cin>>x;
        if(x > a && sol == -1){
            sol = i + 1;
            a = x;
        }
    }
    cout<<sol;
    return 0;
}
