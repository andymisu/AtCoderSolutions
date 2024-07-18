#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    vector<int> row(n+1);
    vector<int> col(n+1);
    int dig1 = 0;
    int dig2 = 0;
    for(int i = 0; i < t; i++) {
        int x;
        cin>>x;
        int a,b;
        if(x % n == 0){
            b = n;
        }else{
            b = x % n;
        }
        x -= b;
        a = x / n;
        a++;
        row[a]++;
        col[b]++;
        if(a == b){
            dig1++;
        }
        if(a + b == n + 1){
            dig2++;
        }
        //cout<<a<<" "<<b<<" "<<row[a]<<" "<<col[b]<<" "<<dig1<<" "<<dig2<<endl;
        if(row[a] == n || col[b] == n || dig1 == n || dig2 == n){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
