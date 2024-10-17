#include <bits/stdc++.h>
using namespace std;
bool pal(int x,int y, string s){
    while(x <= y){
        if(s[x] != s[y]) {
            return 0;
        }
        ++x;
        --y;
    }
    return 1;
}
int main()
{
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    int sol = 0;
    sort(s.begin(),s.end());
    do{
       int ok = true;
        for(int i = 0; i <= n-k; i++){
            if(pal(i,i+k-1,s) == 1){
                ok = false;
                break;
            }
        }
        if(ok == true){
            sol++;
        }
     } while(next_permutation(s.begin(),s.end()));
    cout<<sol;
    return 0;
}
