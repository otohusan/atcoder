#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<string> C(N);
    for (auto &c : C)
        cin >> c;
    map<string, ll> D;
    for (int i = 0; i < M; i++) {
        string c;
        cin >> c;
        D[c] = i + 1;
    }
    vector<ll> P(M + 1); // ここが原因で間違ってた (N)にしたら間違う
    for (auto &p : P)
        cin >> p;

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        if (D.count(C[i])) {
            ans += P[D[C[i]]];
        } else {
            ans += P[0];
        }
    }

    cout << ans;
}
