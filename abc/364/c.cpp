#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, X, Y;
    cin >> N >> X >> Y;
    vector<ll> A(N), B(N);
    for (auto &a : A)
        cin >> a;
    for (auto &a : B)
        cin >> a;

    sort(A.begin(), A.end(), greater<ll>());
    sort(B.begin(), B.end(), greater<ll>());

    ll ans = N;

    for (ll i = 0; i < N; i++) {
        if (X < 0) {
            ans = min(ans, i);
            break;
        }

        X -= A[i];
    }

    for (ll i = 0; i < N; i++) {
        if (Y < 0) {
            ans = min(ans, i);
            break;
        }

        Y -= B[i];
    }

    cout << ans;
}
