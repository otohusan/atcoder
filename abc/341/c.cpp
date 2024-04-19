#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    string T;
    cin >> T;

    map<char, int> dx = {{'U', 0}, {'R', 1}, {'D', 0}, {'L', -1}};
    map<char, int> dy = {{'U', -1}, {'R', 0}, {'D', 1}, {'L', 0}};
    vector<vector<char>> G(H, vector<char>(W));
    for (auto &h : G)
        for (auto &w : h)
            cin >> w;

    int ans = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (G[i][j] == '#') {
                continue;
            }

            int x = j, y = i;
            bool flag = true;

            for (int d = 0; d < N; d++) {
                x += dx[T[d]], y += dy[T[d]];

                if (G[y][x] == '#') {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                ans++;
            }
        }
    }

    cout << ans;
}
