#include <bits/stdc++.h>
using namespace std;
ifstream fin("file.in");
//sliding window
int main() {
    long long n;
    cin>>n;
    vector<long long> right(n);
    vector<long> left(n);
    for(int i = 0; i < n; i++){
        cin>>left[i]>>right[i];
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    long long sol = n*(n-1)/2;
    long long j = 0;
    for(int i = 0; i < n; i++){
        while(right[j] < left[i]){
            j++;
        }
        sol -= j;
    }
    cout<<sol;
    return 0;
}
