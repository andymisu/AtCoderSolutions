#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int main() {
    int n, m, year;
    cin>>n>>m>>year;
    vector<vector<int>> v(n, vector<int>(m));
    map<int, vector<pair<int, int>>> H;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            H[v[i][j]].push_back({i, j});
        }
    }

    int sol = n * m;

    for (int i = 1; i <= year; i++) {
        auto it = H.find(i);
        if (it != H.end()) {
            for (auto j : it->second) {
                if (j.first == 0 || j.second == 0 || j.first == n - 1 || j.second == m - 1 ||
                    (j.first > 0 && v[j.first - 1][j.second] == -1) ||
                    (j.first < n - 1 && v[j.first + 1][j.second] == -1) ||
                    (j.second > 0 && v[j.first][j.second - 1] == -1) ||
                    (j.second < m - 1 && v[j.first][j.second + 1] == -1)) {

                    queue<pair<int, int>> q;
                    q.push({j.first, j.second});

                    while (!q.empty()) {
                        auto per = q.front();
                        q.pop();
                        int x = per.first;
                        int y = per.second;

                        if (v[x][y] == -1) continue;

                        v[x][y] = -1;
                        sol--;

                        for (int d = 0; d < 4; d++) {
                            int nx = x + dx[d];
                            int ny = y + dy[d];
                            if (nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] <= i && v[nx][ny] != -1) {
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
        cout<<sol<<endl;
    }
    return 0;
}
