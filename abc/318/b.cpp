#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    vector<vector<ll>> G(101, vector<ll>(101));

    for (int i = 0; i < N; i++) {
        ll A, B, C, D;
        cin >> A >> B >> C >> D;

        for (int i = C; i < D; i++) {
            for (int j = A; j < B; j++) {
                G[i][j]++;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            if (G[i][j] > 0)
                ans++;
        }
    }

    cout << ans;
}
