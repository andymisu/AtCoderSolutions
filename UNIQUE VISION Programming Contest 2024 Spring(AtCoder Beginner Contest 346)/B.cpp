#include <bits/stdc++.h>

using namespace std;

int main() {
    int w, b;
    string t = "wbwbwwbwbwbw";
    cin>>w>>b;
    int l = t.length();
    for(int i = 0; i < l; i++){
        int x = 0, y = 0;
        for(int j = 0; j < w + b; j++){
            if(t[(i + j) % l] == 'w') ++x;
            else ++y;
        }
        if(w == x && b == y) {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
