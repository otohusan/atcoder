#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 1, 1, -1};
vector<int> dx = {1, 1, -1, -1};

int sousa(vector<string> G, int H, int W, int start_i, int start_j) {
    int size = 0;

    while (true) {

        for (int i = 0; i < 4; i++) {
            int n_i = start_i + dy[i] * (size + 1);
            int n_j = start_j + dx[i] * (size + 1);

            if (n_i < 0 || n_i >= H || n_j < 0 || n_j >= W) {
                return size;
            }

            if (G[n_i][n_j] == '.') {
                return size;
            }
        }

        for (int i = 0; i < 4; i++) {
            int n_i = start_i + dy[i] * (size + 1);
            int n_j = start_j + dx[i] * (size + 1);

            G[n_i][n_j] = '.';
        }

        size++;
    }

    return size;
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> G(H);
    for (auto &g : G)
        cin >> g;

    vector<int> ans(min(H, W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (G[i][j] == '#') {
                int size = sousa(G, H, W, i, j);
                if (size > 0) {
                    G[i][j] = '.';
                    ans[size - 1]++;
                }
            }
        }
    }

    for (auto s : ans)
        cout << s << " ";
}
