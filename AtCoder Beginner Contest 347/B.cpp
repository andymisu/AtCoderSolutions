#include <bits/stdc++.h>
using namespace std;

int main() {
    map<vector<char>,int> H;
    char s[101];
    cin>>s;
    int n = strlen(s);
    int sol = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            vector<char> aux(101);
            for(int k = i; k <= j; k++){
                aux[k - i] = s[k];
            }
            aux[j-i+1] = '\0';
            H[aux]++;
            if(H[aux] == 1){
                sol++;
            }
        }
    }
    cout<<sol;
    return 0;
}
