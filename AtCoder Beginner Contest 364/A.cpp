#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sick = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        if(std::equal(s.begin(), s.end(),"salty")){
            if(sick != 0){
                sick--;
            }
        }else{
            sick++;
        }
        if(sick == 2 && i != n-1){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
