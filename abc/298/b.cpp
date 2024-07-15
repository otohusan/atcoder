#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

vector<vector<int>> rotate90(const vector<vector<int>> &mat) {
    int N = mat.size();
    vector<vector<int>> res(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            res[j][N - 1 - i] = mat[i][j];
        }
    }
    return res;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));

    // 行列 A の入力
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    // 行列 B の入力
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        bool flag = true;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (A[i][j] == 1) {
                    if (B[i][j] != 1) {

                        flag = false;
                    }
                }
            }
        }

        if (flag) {
            cout << "Yes";
            return 0;
        }

        A = rotate90(A);
    }

    cout << "No";
}
