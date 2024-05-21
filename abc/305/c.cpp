#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (auto &h : S)
        cin >> h;

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                int cnt = 0;
                for (ll k = 0; k < 4; k++) {
                    int y = i + dy[k], x = j + dx[k];
                    if (y >= H || y < 0 || x >= W || x < 0)
                        continue;

                    if (S[y][x] == '#')
                        cnt++;
                }

                if (cnt >= 2) {
                    cout << i + 1 << " " << j + 1;
                    return 0;
                }
            }
        }
    }
}
