#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (auto &s : S)
        cin >> s;

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W - 1; j++) {
            if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
                S[i][j] = 'P';
                S[i][j + 1] = 'C';
            }
        }
    }

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            cout << S[i][j];
        }
        cout << endl;
    }
}
