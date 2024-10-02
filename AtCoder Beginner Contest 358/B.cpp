#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a;
    cin>>n>>a;
    int prev;
    bool occupied = false;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        if(occupied == false){
            cout<<x + a<<endl;
            prev = x + a;
            occupied = true;
        }
        else if(occupied == true){
            if(x > prev){
                cout<<x + a<<endl;
                prev = x + a;
            }else{
                cout<<prev + a<<endl;
                prev = prev + a;
            }
        }
    }
    return 0;
}
