//non-inefficient solution
#include <bits/stdc++.h>
using namespace std;
int verif(int i1, int j1, int i2, int j2, int i3, int j3, int m){
    if(abs(i1 - i2) < m && abs(j1 - j2) < m){
        return 0;
    }
    if(abs(i1 - i3) < m && abs(j1 - j3) < m){
        return 0;
    }
    if(abs(i3 - i2) < m && abs(j3 - j2) < m){
        return 0;
    }
    return 1;
}

int main() {
    int n,m;
    cin>>n>>m;
    long long sol = 0;
    vector<vector<long long>> mat(n+1,vector<long long>(n+1,0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin>>x;
            mat[i][j] = mat[i-1][j] + mat[i][j-1] - mat[i-1][j-1] + x;
        }
    }
    int ij,jj,is,js;
    for(int i1 = 1; i1 <= n - m + 1; i1++){
        for(int j1 = 1; j1 <= n - m + 1; j1++){
            for(int i2 = 1; i2 <= n - m + 1; i2++){
                for(int j2 = 1; j2 <= n - m + 1; j2++){
                    for(int i3 = 1; i3 <= n - m + 1; i3++){
                        for(int j3 = 1; j3 <= n - m + 1; j3++){
                            if(verif(i1,j1,i2,j2,i3,j3,m) == 1){
                                long long s = 0;
                                ij = i1 + m - 1;
                                jj = j1 + m - 1 ;
                                is = i1;
                                js = j1;
                                s += mat[ij][jj]-mat[is-1][jj]-mat[ij][js-1]+mat[is-1][js-1];
                                //cout<<i1<<" "<<j1<<" "<<i2<<" "<<j2<<" "<<i3<<" "<<j3<<endl;
                                ij = i2 + m - 1;
                                jj = j2 + m - 1 ;
                                is = i2;
                                js = j2;
                                s += mat[ij][jj]-mat[is-1][jj]-mat[ij][js-1]+mat[is-1][js-1];

                                ij = i3 + m - 1;
                                jj = j3 + m - 1 ;
                                is = i3;
                                js = j3;
                                s += mat[ij][jj]-mat[is-1][jj]-mat[ij][js-1]+mat[is-1][js-1];
                                //cout<<s<<endl;
                                if(s > sol){
                                    sol = s;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<sol;
    return 0;
}
