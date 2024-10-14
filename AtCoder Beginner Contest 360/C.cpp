#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> box(n);
    vector<int> v(n+1);
    for(int i = 0; i < n; i++){
        cin>>box[i];
    }
    int sol = 0;
    for(int i = 0; i < n; i++){
        int weight;
        cin>>weight;
        if(v[box[i]] > weight){
            sol += weight;
        }else{
            sol += v[box[i]];
            v[box[i]] = weight;
        }
    }
    cout<<sol;
    return 0;
}
