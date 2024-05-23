#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> G(M, vector<ll>(N));
    for (ll i = 0; i < M; i++) {
        for (ll j = 0; j < N; j++) {
            cin >> G[i][j];
        }
    }

    vector<set<ll>> ans(N + 1);

    for (ll i = 0; i < M; i++) {
        for (ll j = 0; j < N - 1; j++) {
            ans[G[i][j]].insert(G[i][j + 1]);
            ans[G[i][j + 1]].insert(G[i][j]);
        }
    }

    ll sum = 0;

    for (ll i = 1; i < N + 1; i++) {
        sum += N - ans[i].size() - 1;
    }

    cout << sum / 2;
}
