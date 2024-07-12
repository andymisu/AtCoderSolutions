#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n/3; i++){
        cout<<"oox";
    }
    for(int i = 0; i < n%3; i++){
        cout<<"o";
    }
    return 0;
}
