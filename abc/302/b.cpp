#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

bool detect(vector<string> &S, ll i, ll j, ll H, ll W) {
    string target = "snuke";

    // 縦方向（下）
    if (i + 4 < H) {
        string vertical = "";
        for (ll k = 0; k < 5; ++k) {
            vertical += S[i + k][j];
        }
        if (vertical == target) {
            for (ll k = 0; k < 5; ++k) {
                cout << i + k + 1 << " " << j + 1 << endl;
            }
            return true;
        }
    }

    // 縦方向（上）
    if (i - 4 >= 0) {
        string vertical = "";
        for (ll k = 0; k < 5; ++k) {
            vertical += S[i - k][j];
        }
        if (vertical == target) {
            for (ll k = 0; k < 5; ++k) {
                cout << i - k + 1 << " " << j + 1 << endl;
            }
            return true;
        }
    }

    // 横方向（右）
    if (j + 4 < W) {
        string horizontal = "";
        for (ll k = 0; k < 5; ++k) {
            horizontal += S[i][j + k];
        }
        if (horizontal == target) {
            for (ll k = 0; k < 5; ++k) {
                cout << i + 1 << " " << j + 1 + k << endl;
            }
            return true;
        }
    }

    // 横方向（左）
    if (j - 4 >= 0) {
        string horizontal = "";
        for (ll k = 0; k < 5; ++k) {
            horizontal += S[i][j - k];
        }
        if (horizontal == target) {
            for (ll k = 0; k < 5; ++k) {
                cout << i + 1 << " " << j + 1 - k << endl;
            }
            return true;
        }
    }

    // 斜め方向（右下）
    if (j + 4 < W && i + 4 < H) {
        string diagonal = "";
        for (ll k = 0; k < 5; ++k) {
            diagonal += S[i + k][j + k];
        }
        if (diagonal == target) {
            for (ll k = 0; k < 5; ++k) {
                cout << i + 1 + k << " " << j + 1 + k << endl;
            }
            return true;
        }
    }

    // 斜め方向（左上）
    if (j - 4 >= 0 && i - 4 >= 0) {
        string diagonal = "";
        for (ll k = 0; k < 5; ++k) {
            diagonal += S[i - k][j - k];
        }
        if (diagonal == target) {
            for (ll k = 0; k < 5; ++k) {
                cout << i + 1 - k << " " << j + 1 - k << endl;
            }
            return true;
        }
    }

    // 斜め方向（右上）
    if (j + 4 < W && i - 4 >= 0) {
        string diagonal = "";
        for (ll k = 0; k < 5; ++k) {
            diagonal += S[i - k][j + k];
        }
        if (diagonal == "snuke") {
            for (ll k = 0; k < 5; ++k) {
                cout << i + 1 - k << " " << j + 1 + k << endl;
            }
            return true;
        }
    }

    // 斜め方向（左下）
    if (j - 4 >= 0 && i + 4 < H) {
        string diagonal = "";
        for (ll k = 0; k < 5; ++k) {
            diagonal += S[i + k][j - k];
        }
        if (diagonal == "snuke") {
            for (ll k = 0; k < 5; ++k) {
                cout << i + 1 + k << " " << j + 1 - k << endl;
            }
            return true;
        }
    }

    return false;
}

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (auto &s : S)
        cin >> s;

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (detect(S, i, j, H, W)) {
                return 0;
            };
        }
    }
}
