#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a;
    int b;
    cin>>n>>a>>b;
    int ok1 = 0;
    int ok2 = 0;
    map<int,int> H;
    for(int i = 0; i < n; i++){
       int x;
       cin>>x;
       H[x % (a + b)]++;
    }
    auto it1 = H.begin();
    auto it2 = H.end();
    it2--;
    int ok = 1;
    if(it2->first - it1->first >= a){
        ok = 0;
    }
    if(ok == 0){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    return 0;
}
