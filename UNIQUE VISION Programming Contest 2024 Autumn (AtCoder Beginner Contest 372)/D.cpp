#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    vector<int> ans(n);
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        cin>>h[i];
    }
    for (int i = n-2; i >= 0; --i) {
        while (!st.empty() && h[st.top()] < h[i + 1]) {
            st.pop();
        }
        st.push(i + 1);
        ans[i] = st.size();
    }

    for (int i = 0; i < n; ++i) {
        cout<<ans[i]<<" ";
    }

    return 0;
}
