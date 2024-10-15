#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,g,b;
    cin>>r>>g>>b;
    string c;
    cin>>c;
    if(c == "Red"){
        cout<<min(g,b);
    }
    if(c == "Blue"){
        cout<<min(r,g);
    }
    if(c == "Green"){
        cout<<min(r,b);
    }
    return 0;
}
