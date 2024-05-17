#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<char>> B = A;

    for (int i = 1; i < N; i++) {
        B[0][i] = A[0][i - 1];
    }

    for (int i = 1; i < N; i++) {
        B[i][N - 1] = A[i - 1][N - 1];
    }

    for (int i = 1; i < N; i++) {
        B[N - 1][N - 1 - i] = A[N - 1][N - i];
    }

    for (int i = 1; i < N; i++) {
        B[N - 1 - i][0] = A[N - i][0];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << B[i][j];
        }
        cout << endl;
    }
}
