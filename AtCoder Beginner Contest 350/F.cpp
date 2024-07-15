#include<bits/stdc++.h>

using namespace std;

char flip(char c){
    if('A' <= c && c <= 'Z'){
        return (c- 'A' + 'a');
    }
    return (c- 'a' + 'A');
}
string s;
vector<int> aux;
void f(int left, int right, int k){
    if(k == 0){
        while(left <= right){
            if(s[left] == '('){
                f(left+1, aux[left]-1,1);
                left = aux[left];
            }
            else{
                cout<<s[left];
            }
            left++;
        }
    }
    else{
        while(left <= right){
            if(s[right] == ')'){
                f(aux[right]+1,right-1,0);
                right = aux[right];
            }
            else{
                cout<<s[right];
            }
            right--;
        }
    }
}

int main(){
    cin >> s;
    int l=s.size();
    aux.resize(l);
    int h=0;
    stack<int> st;
    for(int i = 0; i < l; i++){
        if(s[i] == '('){
            st.push(i);
            h++;
        }
        else if(s[i] == ')'){
            aux[i] = st.top();
            aux[st.top()] = i;
            st.pop();
            h--;
        }
        else if(h%2 == 1){
            s[i] = flip(s[i]);
        }
    }
    f(0,l-1,0);
    return 0;
}
