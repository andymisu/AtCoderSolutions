#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < q; i++) {
        int b, k;
        cin >> b >> k;
        auto it = lower_bound(v.begin(), v.end(), b);
        int x = distance(v.begin(), it);
        vector<int> dist;
        int left = x - 1, right = x;
        int cnt = k;
        while (cnt) {
            if (right < n && (left < 0 || abs(v[right] - b) < abs(v[left] - b))) {
                dist.push_back(abs(v[right] - b));
                right++;
            } else if (left >= 0) {
                dist.push_back(abs(v[left] - b));
                left--;
            }
            cnt--;
        }
        cout << dist[k - 1] << endl;
    }
    return 0;
}
