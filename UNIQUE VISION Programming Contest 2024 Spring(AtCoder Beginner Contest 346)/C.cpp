#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long N, K;
    long long buff;
    cin >> N >> K;
    long long max_sum = (K * (K+1)) / 2;
    map<long long, int> H;
    for(int i=0; i<N; i++)
    {
        cin >> buff;
        H[buff]++;
    }
    for(auto it : H)
    {
        if(it.first <= K)
            max_sum = max_sum - it.first;
    }
    cout << max_sum;
}
