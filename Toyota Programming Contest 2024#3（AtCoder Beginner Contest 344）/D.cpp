#include <bits/stdc++.h>
using namespace std;
int prefix(string s1,string s2){
    int n = s1.length();
    int m = s2.length();
    if(n > m){
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    string t;
    cin>>t;
    int n;
    cin>>n;

    map<string,int> H;
    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        map<string, int> E;
        for(int j = 0; j < k; j++){
            string x;
            cin>>x;
            if(prefix(x,t) == 1){
                E[x] = 1;
                H[x] = 1;
            }
            map<string, int> H2 = H;
            for(auto it : H){
                if(prefix(it.first + x, t) == 1 && E.count(it.first) == 0){
                    if(H2.count(it.first + x) == 0){
                        H2[it.first + x] = it.second + 1;
                        E[it.first + x] = it.second + 1;
                    }else{
                        if(H2[it.first + x] > it.second + 1){
                            H2[it.first + x] = it.second + 1;
                            E[it.first + x] = it.second + 1;
                        }
                    }
                }
            }
            H = H2;
        }
    }
    auto it = H.find(t);
    if(it != H.end()){
        cout<<it->second;
    }else{
        cout<<-1;
    }
    return 0;
}
