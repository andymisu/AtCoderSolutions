#include <bits/stdc++.h>
using namespace std;
long double mini;
int ok;

long double calc(vector<int> x, vector<pair<pair<int,int>,pair<int,int>>> &v, int n,vector<int> &ord){
    long double s = 0;
    pair<int,int> last = {0,0};
    for(int i = 0; i < n; i++){
        pair<int,int> p1 = v[x[i]].first;
        pair<int,int> p2 = v[x[i]].second;
        long double d1 = sqrt((last.first - p1.first)*(last.first - p1.first) + (last.second - p1.second)*(last.second - p1.second));
        long double d2 = sqrt((last.first - p2.first)*(last.first - p2.first) + (last.second - p2.second)*(last.second - p2.second));
        if(ord[i] == 0){
            s += d1;
            last = p2;
        }else{
            s += d2;
            last = p1;
        }
    }
    //cout<<s<<endl;
    return s;

}

void getPart(int k,vector<int> &v,int n,vector<int> x,vector<pair<pair<int,int>,pair<int,int>>>&per){
    for(int i = 0; i <= 1; i++){
        v[k] = i;
        if(k < n-1) {
            getPart(k + 1, v,n,x,per);
        }else{
            if(ok == 0){
                ok = 1;
                mini = calc(x,per,n,v);
            }else{
                mini = min(calc(x,per,n,v),mini);
            }

        }
    }
}

void perm(int k, vector<int> &x, vector<int> fr, int n,vector<pair<pair<int,int>,pair<int,int>>> &v){
    for(int i = 0; i < n; i++){
        if(fr[i] == 0){
            x[k] = i;
            fr[i] = 1;
            if(k == n-1){
                vector<int> aux(n);
                getPart(0,aux, n,x,v);
            }else {
                perm(k + 1, x, fr, n,v);
            }
            fr[i] = 0;
        }
    }
}
int main() {
    int n,s,t;
    cin>>n>>s>>t;
    long double sol = 0;
    vector<pair<pair<int,int>,pair<int,int>>> v;
    for(int i = 0; i < n; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        v.push_back({{a,b},{c,d}});
        long double term = sqrt((a-c)*(a-c) + (b-d)*(b-d));
        sol += term/t;
    }
    vector<int> x(n);
    vector<int> fr(n);
    perm(0,x,fr,n,v);
    sol += mini/s;
    cout<<fixed<<setprecision(12)<<sol;
    return 0;
}
