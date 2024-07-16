#include <bits/stdc++.h>
using namespace std;
#define pow10_9 1e9;
long long int solve(long long a,long long b){
    int arr[3][5] = {{0,0,0,0,0},{0,2,3,3,4},{0,3,6,7,8}};
    long long int t1 = (a / 2) * (b / 4) * arr[2][4];
    long long int t2 = (a / 2) * arr[2][b%4];
    long long int t3 = (b / 4) * arr[a%2][4];
    long long int t4 = arr[a%2][b%4];
    return t1 + t2 + t3 + t4;
}
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a += pow10_9;
    b += pow10_9;
    c += pow10_9;
    d += pow10_9;
    cout<<solve(d,c) + solve(b,a) - solve(b,c) - solve(d,a);
    return 0;
}
