#include <bits/stdc++.h>
using namespace std;
unsigned long long next(unsigned long long x){
    unsigned long long power = 1;
    while(x % 2 == 0){
        power *= 2;
        x /= 2;
    }
    x++;
    return power*x;
}
int main() {
    unsigned long long a,b;
    cin>>a>>b;
    unsigned long long x = a;
    vector<pair<unsigned long long, unsigned long long>> sol;
    if(a == 0){
        unsigned long long first = 1;
        while(first * 2 <= b){
            first *= 2;
        }
        x = first;
        sol.push_back({a,x});
    }
    while(x < b-1){
        unsigned long long aux = next(x);
        if(aux <= b){
            sol.push_back({x,aux});
            x = aux;
        }
        else{
            unsigned long long p;
            unsigned long long aux1 = x;
            unsigned long long auxpower = 1;
            while(aux1 % 2 == 0){
                aux1 /= 2;
                auxpower *= 2;
                if((aux1 + 1) * auxpower <= b){
                    p = (aux1 + 1) * auxpower;
                }
            }
            sol.push_back({x,p});
            x = p;
        }
    }
    if(x != b){
        sol.push_back({x,b});
    }
    unsigned long long l = sol.size();
    cout<<l<<endl;
    for(unsigned long long i = 0; i < l; i++){
        cout<<sol[i].first<<" "<<sol[i].second<<endl;
    }
    return 0;
}
