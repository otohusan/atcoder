#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> G(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> G[i][j];
        }
    }

    ll ans = 0;

    for (int bit = 0; bit < (1 << (H + W - 2)); ++bit) {
        int x = 0, y = 0;
        set<int> S;
        bool flag = true;
        S.insert(G[y][x]);

        for (int i = 0; i < H + W - 2; i++) {
            if (bit & (1 << i)) {
                x += 1;
            } else {
                y += 1;
            }

            if (x < 0 || x >= W || y < 0 || y >= H) {
                flag = false;
                break;
            }

            if (S.count(G[y][x])) {
                flag = false;
                break;
            }

            S.insert(G[y][x]);
        }

        if (flag)
            ans++;
    }

    cout << ans;
}
