#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    // 入力
    vector<vector<char>> G(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            G[i][j] = '.';
        }
    }

    int cx = 0, cy = 0;
    vector dx = {-1, 0, 1, 0};
    vector dy = {0, 1, 0, -1};
    int cd = 0;

    for (int i = 0; i < N; i++) {
        if (G[cx % H][cy % W] == '.') {
            G[cx % H][cy % W] = '#';
            cd += 1;
            cx += dx[abs(cd % 4)];
            cy += dy[abs(cd % 4)];

            if (cx < 0)
                cx = H - 1;
            if (cy < 0)
                cy = W - 1;
        }

        else {
            G[cx % H][cy % W] = '.';
            cd -= 1;
            cx += dx[abs(cd % 4)];
            cy += dy[abs(cd % 4)];

            if (cx < 0)
                cx = H - 1;
            if (cy < 0)
                cy = W - 1;
        }

        // cout << "cd: " << cd << endl;
        // cout << "cx: " << cx << ", cy: " << cy << endl;
    }

    // 出力
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cout << G[i][j];
        }
        cout << endl;
    }
}
