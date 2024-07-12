#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");
int main() {
    int n, q;
    fin>>n>>q;
    vector<pair<int,int>> v(n+1,{-1,-1});
    vector<long long> sol(n+1);
    vector<long long> s(q+1);
    int k = 0;
    for(int i = 0; i < q; i++){
        int x;
        fin>>x;
        if(i != 0) {
            s[i] = s[i-1] + k;
        }
        if(v[x].second != -1 || v[x].first == -1){
            v[x].first = i;
            v[x].second = -1;
            k++;
        }else{
            v[x].second = i;
            sol[x] += s[i] - s[v[x].first];
            k--;
        }
    }
    s[q] = s[q-1] + k;
    for(int i = 1; i <= n; i++){
        if(v[i].second == -1){
            if(v[i].first != -1){
                sol[i] += s[q] - s[v[i].first];
            }
        }
        cout<<sol[i]<<" ";
    }
    return 0;
}
