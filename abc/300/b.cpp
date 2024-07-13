#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

vector<string> tate_shift(vector<string> G, int H, int W) {
    vector<string> res_G = G;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            res_G[i][j] = G[(i + 1) % H][j];
        }
    }

    return res_G;
}

vector<string> yoko_shift(vector<string> G, int H, int W) {
    vector<string> res_G = G;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            res_G[i][j] = G[i][(j + 1) % W];
        }
    }

    return res_G;
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H);
    vector<string> B(H);
    for (auto &a : A)
        cin >> a;
    for (auto &a : B)
        cin >> a;

    for (int i = 0; i < H; i++) {

        for (int j = 0; j < W; j++) {
            if (A == B) {
                cout << "Yes";
                return 0;
            }

            A = yoko_shift(A, H, W);
        }

        A = tate_shift(A, H, W);
    }

    cout << "No";
}
