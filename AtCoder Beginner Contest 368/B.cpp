#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maxH;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        maxH.push(x);
    }

    int k = n;
    int sol = 0;
    while(k > 1){
        sol++;
        int a = maxH.top();
        maxH.pop();
        int b = maxH.top();
        maxH.pop();
        a--;
        b--;
        if(a == 0){
            k--;
        }
        if(b == 0){
            k--;
        }
        maxH.push(a);
        maxH.push(b);
    }
    cout<<sol;
    return 0;
}
