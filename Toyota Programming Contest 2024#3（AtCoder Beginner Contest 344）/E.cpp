#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   int a;
   cin>>n;
   map<int,pair<int,int>> H;
   cin>>a;
   H[a].first = 0;
   for(int i = 1; i < n; i++){
       int x;
       cin>>x;
       H[x].first = a;
       H[a].second = x;
       a = x;
   }
   H[a].second = 0;
   int q;
   cin>>q;
   for(int i = 0; i < q; i++){
       int c;
       cin>>c;
       if(c == 2){
            int x;
            --n;
            cin>>x;

            H[H[x].first].second = H[x].second;
            H[H[x].second].first = H[x].first;

           if(H[x].first == 0){
               H[x].first = -1;
           }
       }
       if(c == 1){
           int x,y;
           cin>>x>>y;
           ++n;

           H[y].first = x;
           H[y].second = H[x].second;

           H[H[x].second].first = y;
           H[x].second = y;

       }
   }


    auto first = H.begin();
    while(first->second.first != 0){
        first++;
    }
    for(int i = 0; i < n;){
        if(first->first != 0) {
            cout<<first->first<<" ";
            i++;
        }
        first = H.find(first->second.second);
    }

    return 0;
}
