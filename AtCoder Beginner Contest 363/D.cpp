#include <bits/stdc++.h>
using namespace std;
long long pow_ten(int x){
    if(x == 0){
        return 1;
    }else{
        return pow_ten(x-1)*10;
    }
}

int main() {
    long long n;
    cin>>n;
    if(n == 1){
        cout<<0;
        return 0;
    }
    n--;
    int d = 1;
    while(d){
        int x = (d+1)/2;
        if(n <= 9 * pow_ten(x-1)){
            string s = to_string(pow_ten(x-1) + n -1);
            for(int i = x; i < d; i++){
                s.push_back(s[d-i-1]);
            }
            cout<<s;
            return 0;
        }else{
            n -= 9 * pow_ten(x-1);
        }
        d++;
    }
    return 0;
}
