#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0, -1, 1, 1, -1};
vector<int> dx = {0, 1, 0, -1, 1, 1, -1, -1};

int main() {
    ll H, W;
    cin >> H >> W;
    vector<vector<char>> S(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    ll ans = 0;

    stack<pair<int, int>> Sta;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                Sta.push({i, j});
                ans++;

                while (!Sta.empty()) {
                    pair<int, int> Z = Sta.top();
                    int x = Z.first;
                    int y = Z.second;
                    S[x][y] = '.';
                    Sta.pop();

                    for (int d = 0; d < 8; d++) {
                        int n_x = x + dx[d];
                        int n_y = y + dy[d];
                        if (n_x >= H || n_x < 0 || n_y >= W || n_y < 0) {
                            continue;
                        }

                        if (S[n_x][n_y] == '#') {
                            Sta.push({n_x, n_y});
                        }
                    }
                }
            }
        }
    }

    cout << ans;
}
