#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    array<unsigned, 3> dp{};
    auto&& [rock, scissors, paper]{dp};
    for(const auto c : s){
        dp = {max(scissors, paper), max(rock, paper), max(rock, scissors)};
        if (c == 'R') {
            scissors = 0;
            ++paper;
        } else if (c == 'S') {
            paper = 0;
            ++rock;
        } else if (c == 'P') {
            rock = 0;
            ++scissors;
        }
    }
    cout << ranges::max(dp) << endl;
    return 0;
}
