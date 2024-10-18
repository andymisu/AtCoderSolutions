#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n % 4 != 0){
        cout<<365;
        return 0;
    }
    if(n % 4 == 0 && n % 100 != 0){
        cout<<366;
        return 0;
    }
    if(n % 100 == 0 && n % 400 != 0){
        cout<<365;
        return 0;
    }
    if(n % 400 == 0){
        cout<<366;
    }
    return 0;
}
