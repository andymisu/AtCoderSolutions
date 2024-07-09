#include <bits/stdc++.h>
using namespace std;
int volumeof2(int a1, int b1, int c1, int a2, int b2, int c2) {
    int vol = 1;
    vol *= max(0, min(a1, a2) + 7 - max(a1, a2));
    vol *= max(0, min(b1, b2) + 7 - max(b1, b2));
    vol *= max(0, min(c1, c2) + 7 - max(c1, c2));
    return vol;
}

int volumeof3(int a1, int b1, int c1, int a2, int b2, int c2, int a3, int b3, int c3){
    int vol = 1;
    vol *= max(0, min({a1, a2, a3}) + 7 - max({a1, a2, a3}));
    vol *= max(0, min({b1, b2, b3}) + 7 - max({b1, b2, b3}));
    vol *= max(0, min({c1, c2, c3}) + 7 - max({c1, c2, c3}));
    return vol;
}

int main() {
    int v1, v2, v3;
    cin>>v1>>v2>>v3;
    for(int a2 = -7; a2 <= 7; a2++){
        for(int b2 = -7; b2 <= 7; b2++){
            for (int c2 = -7; c2 < 7; ++c2) {
                for (int a3 = -7; a3 < 7; ++a3) {
                    for (int b3 = -7; b3 < 7; ++b3) {
                        for (int c3 = -7; c3 < 7; ++c3) {
                            int newv3 = volumeof3(0, 0, 0, a2, b2, c2, a3, b3, c3);
                            int newv2 = volumeof2(0, 0, 0, a2, b2, c2) + volumeof2(0, 0, 0, a3, b3, c3) + volumeof2(a2, b2, c2, a3, b3, c3) - nv3 * 3;
                            int newv1 = 3 * 7 * 7 * 7 - newv2 * 2 - newv3 * 3;
                            if(v1 == newv1 && v2 == newv2 && v3 == newv3){
                                cout<<"Yes\n"<<"0 0 0 "<<a2<<" "<<b2<<" "<<c2<<" "<<a3<<" "<<b3<<" "<<c3;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"No";
    return 0;
}
