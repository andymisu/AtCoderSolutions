#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    vector<string> v;
    int l = s.length();
    int ok;
    do{
        ok = 0;
        string aux = s;
        string min = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        for(int i = 0; i < l; i++){
            if(s[i] != t[i]){
                aux[i] = t[i];
                if(aux < min) {
                    min = aux;
                }
                ok = 1;
                aux[i] = s[i];
            }
        }
        s = min;
        v.push_back(s);
    }while(ok == 1);
    int sol = v.size();
    cout<<sol-1<<endl;
    for(int i = 0; i < sol-1; i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
