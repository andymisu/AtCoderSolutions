#include <bits/stdc++.h>
using namespace std;
pair<int,int> biggest_smaller3(int m){
    int x = 1;
    int k = 0;
    while(x * 3 <= m){
        x *= 3;
        k++;
    }
    return {x,k};
}
int main() {
    int m;
    cin>>m;
    vector<int> v;
    while(m){
        auto x = biggest_smaller3(m);
        int a = x.first;
        int power = x.second;
        m -= a;
        v.push_back(power);
    }
    int n = v.size();
    cout<<n<<'\n';
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
