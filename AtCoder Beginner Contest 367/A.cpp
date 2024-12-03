#include <bits/stdc++.h>
using namespace std;

int main() {
    int sleep,wake,shout;
    cin>>sleep>>wake>>shout;
    if(sleep < wake){
        if(shout < wake && shout > sleep){
            cout<<"No";
        }else{
            cout<<"Yes";
        }
    }else{
        if(shout < sleep && shout > wake){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
    return 0;
}
