#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};
vector<string> pattern = {"###.?????", "###.?????", "###.?????",
                          "....?????", "?????????", "?????....",
                          "?????.###", "?????.###", "?????.###"};

bool compare(vector<string> G, ll N, ll M, ll s_i, ll s_j) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (pattern[i][j] == '?')
                continue;
            if (G[i + s_i][j + s_j] != pattern[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {

    ll N, M;
    cin >> N >> M;
    vector<string> G(N);
    for (auto &g : G)
        cin >> g;
    ll p_H = pattern.size();
    ll p_W = pattern[0].size();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (p_H + i > N || p_W + j > M)
                continue;
            if (compare(G, p_H, p_W, i, j)) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}
