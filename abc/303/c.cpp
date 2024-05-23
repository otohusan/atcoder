#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    set<pair<ll, ll>> Items;
    for (ll i = 0; i < M; i++) {
        ll x, y;
        cin >> x >> y;
        Items.insert({x, y});
    }

    ll cx = 0, cy = 0;

    for (ll i = 0; i < N; i++) {
        H--;

        if (H < 0) {
            cout << "No";
            return 0;
        }

        if (S[i] == 'U') {
            cx += dx[0];
            cy += dy[0];
        }
        if (S[i] == 'R') {
            cx += dx[1];
            cy += dy[1];
        }
        if (S[i] == 'D') {
            cx += dx[2];
            cy += dy[2];
        }
        if (S[i] == 'L') {
            cx += dx[3];
            cy += dy[3];
        }

        if (Items.count({cx, cy}) && H < K) {
            H = K;
            Items.erase({cx, cy});
        }
    }

    cout << "Yes";
}
