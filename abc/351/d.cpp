#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

ll H, W;

vector<vector<ll>> G(H, vector<ll>(W));
vector<vector<char>> S(H, vector<char>(W));

ll check(int by, int bx) {
    for (int nd = 0; nd < 4; nd++) {
        ll y = by;
        ll x = bx;
        y = y + dy[nd];
        x = x + dx[nd];

        if (G[y][x] != -1) {
            return G[y][x] + 1;
        }

        bool flag = true;

        for (int d = 0; d < 4; d++) {
            ll ty = y + dy[d];
            ll tx = x + dx[d];

            if (ty >= H || ty < 0 || tx >= W || tx < 0)
                continue;

            if (S[ty][tx] == '#') {
                flag = false;
            }
        }

        if (flag) {
        }
    }
}

int main() {
    ll ans = -1;

    cin >> H >> W;

    G.assign(H, vector<ll>(W, -1));
    S.assign(H, vector<char>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (G[i][j] != -1)
                continue;

            if (S[i][j] == '.') {
                bool flag = true;
                for (int d = 0; d < 4; d++) {

                    ll y = i + dy[d];
                    ll x = j + dx[d];
                    if (y >= H || y < 0 || x >= W || x < 0)
                        continue;

                    if (S[y][x] == '#')
                        flag = false;
                }

                if (flag) {
                    ans = max(ans, check(i, j));
                    G[i][j] = 0;
                }
            }
        }
    }
}
