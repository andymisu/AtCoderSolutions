#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> H;
    for(int i = 0 ; i < n; i++){
        int c;
        cin>>c;
        if(c == 1){
            int x;
            cin>>x;
            H[x]++;
        }
        if(c == 2){
            int x;
            cin>>x;
            H[x]--;
            if(H[x] == 0){
                H.erase(x);
            }
        }
        if(c == 3){
            cout<<H.size()<<endl;
        }
    }
    return 0;
}
