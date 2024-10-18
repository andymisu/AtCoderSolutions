#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,y;
    vector<int> v(n);
    cin>>v[0]>>v[1];
    int max1,max2;
    if(v[1] > v[0]){
        max1 = 1;
        max2 = 0;
    }else{
        max1 = 0;
        max2 = 1;
    }
    for(int i = 2;i < n; i++){
        cin>>v[i];
        if(v[i] > v[max1]){
            max2 = max1;
            max1 = i;
        }else if(v[i] > v[max2]){
            max2 = i;
        }
    }
    cout<<max2+1;
    return 0;
}
