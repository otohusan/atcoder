#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

bool sousa(ll retu, ll gyo, vector<vector<bool>> &G, ll N) {
    bool flag = true;
    for (ll i = 0; i < N; i++) {
        if (G[i][retu] == false)
            flag = false;
    }
    if (flag == true) {
        return true;
    }

    flag = true;
    for (ll i = 0; i < N; i++) {
        if (G[gyo][i] == false)
            flag = false;
    }
    if (flag == true) {
        return true;
    }

    // 主対角線のチェック
    if (gyo == retu) {
        flag = true;
        for (ll i = 0; i < N; i++) {
            if (!G[i][i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return true;
        }
    }

    flag = true;
    for (ll i = 0; i < N; i++) {
        if (G[i][N - 1 - i] == false)
            flag = false;
    }
    if (flag == true) {
        return true;
    }

    return false;
}

int main() {
    ll N, T;
    cin >> N >> T;

    vector<vector<bool>> G(N, vector<bool>(N, false));

    for (ll i = 0; i < T; i++) {
        ll A;
        cin >> A;

        ll row = (A - 1) / N;
        ll col = (A - 1) % N;

        G[row][col] = true;

        if (sousa(col, row, G, N)) {
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;
}
