#include <bits/stdc++.h>
using namespace std;
int comb[10];
int sol = 11;
void verif(string s[], int k,int m){
    vector<bool> fr(m);
    for(int i = 0; i < k; i++){
        for(int j = 0; j < m; j++){
            if(s[comb[i]][j] == 'o'){
                fr[j] = true;
            }
        }
    }
    bool ok = true;
    for(int i = 0; i < m; i++){
        if(fr[i] == 0){
            ok = false;
        }
    }
    if(ok == true){
        
        if(sol > k){
            sol = k;
        }
    }
}
void combination(int n, int m,int max, int k,int last,string s[]){
    if(k == max){
        verif(s,k,m);
    }
    else{
        for(int i = last + 1; i < n; i++){
            comb[k] = i;
            combination(n,m,max,k+1,i,s);
        }
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    for(int i = 1; i <= m; i++){
        combination(n,m,i,0,-1,s);
    }
    cout<<sol;
    return 0;
}
