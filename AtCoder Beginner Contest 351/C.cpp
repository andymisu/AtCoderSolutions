#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    int x;
    cin>>x;
    v.push_back(x);
    for(int i = 1; i< n; i++){
        cin>>x;
        v.push_back(x);
        int l = v.size();
        while(v[l-1] == v[l-2]){
            int aux = v[l-1];
            v.pop_back();
            v.pop_back();
            v.push_back(aux+1);
            l--;
        }
    }
    int l = v.size();
    cout<<l;
    return 0;
}
