#include <bits/stdc++.h>
using namespace std;
unsigned long long int convert(int v[],int k){
    unsigned long long int sol = 0;
    for(int i = k - 1; i >= 0; i--){
        sol = sol * 2 + v[i];
    }
    return sol;
}
int main() {
    unsigned long long int c;
    int a,b;
    cin>>a>>b>>c;
    unsigned long long int copy = c;
    unsigned long long int final = c;
    int l = 0;
    while(copy) {
        l++;
        copy /= 2;
    }
    int v[120],w[120];
    int kv = 0;
    int kw = 0;
    while((a || b) && c){
        int bit = c % 2;
        c = c / 2;
        if(bit == 0){
            if(a+b > l) {
                a--;
                b--;
                l--;
                v[kv++] = 1;
                w[kw++] = 1;
            }else{
                l--;
                v[kv++] = 0;
                w[kw++] = 0;
            }
        }
        if(bit == 1){
            if(a > b && a != 0){
                a--;
                l--;
                v[kv++] = 1;
                w[kw++] = 0;
            }else if(b != 0){
                b--;
                l--;
                v[kv++] = 0;
                w[kw++] = 1;
            }
        }
    }
    if(a == b){
        for(int i = 0; i < a; i++){
            v[kv++] = 1;
            w[kw++] = 1;
        }
    }else{
        cout<<-1;
        return 0;
    }
    if(c == 0) {
        unsigned long long int x = convert(v, kv);
        unsigned long long int y = convert(w, kw);
        if(kv > 64 && kw > 64){
            cout<<-1;
            return 0;
        }else{
            cout<<x<<" "<<y;
            return 0;
        }
    }else{
        cout<<-1;
    }
    return 0;
}
