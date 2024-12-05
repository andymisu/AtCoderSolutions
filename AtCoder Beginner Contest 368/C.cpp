#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long T = 0;
    for(int i = 0; i < n; i++){
        long long x;
        cin>>x;
        int a = x / 5;
        T += a*3;
        x -= a*5;
        while(x > 0){
            T++;
            if(T % 3 == 0){
                x -= 3;
            }else{
                x--;
            }
        }
    }
    cout<<T;
    return 0;
}
