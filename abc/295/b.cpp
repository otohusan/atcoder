#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

vector<string> bakuha(vector<string> B, int R, int C, char B_power, int B_i,
                      int B_j) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if ((abs(i - B_i) + abs(j - B_j)) <= int(B_power - '0')) {
                if (B[i][j] == '#')
                    B[i][j] = '.';
            }
        }
    }

    return B;
}

int main() {
    int R, C;
    cin >> R >> C;

    vector<string> B(R);
    for (auto &b : B)
        cin >> b;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (B[i][j] != '#' && B[i][j] != '.') {
                B = bakuha(B, R, C, B[i][j], i, j);
                B[i][j] = '.';
            }
        }
    }

    for (auto &b : B)
        cout << b << endl;
}
