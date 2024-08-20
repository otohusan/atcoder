#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int H, W, S1, S2;
    cin >> H >> W >> S1 >> S2;
    S1--;
    S2--;
    vector<string> G(H);
    for (auto &g : G)
        cin >> g;
    string X;
    cin >> X;

    for (int i = 0; i < X.length(); i++) {
        int ny = S1, nx = S2;

        if (X[i] == 'U')
            ny += dy[0];
        if (X[i] == 'R')
            nx += dx[1];
        if (X[i] == 'D')
            ny += dy[2];
        if (X[i] == 'L')
            nx += dx[3];

        if (ny < 0 || ny >= H || nx < 0 || nx >= W)
            continue;
        if (G[ny][nx] == '#')
            continue;

        S1 = ny;
        S2 = nx;
    }

    cout << S1 + 1 << " " << S2 + 1;
}
