#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int n;
    cin>>n;
    vector<vector<vector<int>>> a(n,vector<vector<int>>(n,vector<int>(n)));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cin>>a[i][j][k];
            }
        }
    }
    vector sum(n + 1, vector(n + 1, vector(n + 1, 0LL)));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                sum[i + 1][j + 1][k + 1] =
                        sum[i][j + 1][k + 1] + sum[i + 1][j][k + 1] +
                        sum[i + 1][j + 1][k] - sum[i][j][k + 1] - sum[i][j + 1][k] -
                        sum[i + 1][j][k] + sum[i][j][k] + a[i][j][k];
            }
        }
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++) {
        int lx,ly,lz,rx,ry,rz;
        cin>>lx>>rx>>ly>>ry>>lz>>rz;
        lx--;
        ly--;
        lz--;
        cout << sum[rx][ry][rz] - sum[lx][ry][rz] - sum[rx][ly][rz] -
                sum[rx][ry][lz] + sum[lx][ly][rz] + sum[lx][ry][lz] +
                sum[rx][ly][lz] - sum[lx][ly][lz]
             << "\n";
    }
    return 0;
}
