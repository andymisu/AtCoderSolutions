#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(long long N) {
    string s = to_string(N);
    return s == string(s.rbegin(), s.rend());
}

long long reverse_num(long long x) {
    long long rev_x = 0;
    while (x > 0) {
        rev_x = rev_x * 10 + x % 10;
        x /= 10;
    }
    return rev_x;
}
bool contain_zero(long long n) {
    string s = to_string(n);
    for (char c : s) {
        if (c == '0') {
            return true;
        }
    }
    return false;
}

string solve(long long n, unordered_map<long long, string>& H) {
    if (H.find(n) != H.end()) {
        return H[n];
    }
    if (contain_zero(n) == 0 && is_palindrome(n)) {
        return to_string(n);
    }
    for (long long x = 2; x * x <= n; x++) {
        if (n % x == 0 && contain_zero(x) == 0) {
            long long y = reverse_num(x);
            if ((n / x) % y == 0) {
                string result = solve(n / x / y, H);
                if (!result.empty()) {
                    H[n] = to_string(x) + "*" + result + "*" + to_string(y);
                    return H[n];
                }
            }
        }
    }
    H[n] = "";
    return "";
}

int main() {
    long long N;
    cin >> N;
    unordered_map<long long, string> memo;
    string result = solve(N, memo);
    if (result.empty()) {
        cout<<"-1"<<endl;
    } else {
        cout<<result<<endl;
    }

    return 0;
}
