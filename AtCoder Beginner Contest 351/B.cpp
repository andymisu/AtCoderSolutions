#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin>>c;
            if(c != arr[i][j]){
                cout<<i+1<<" "<<j+1;
            }
        }
    }
    return 0;
}
