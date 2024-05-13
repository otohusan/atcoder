#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    ll max_dif_index = -1;
    ll max_dif = -1;
    vector<ll> A(N);
    vector<ll> B(N);

    for (ll i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;

        if (max_dif < abs(a - b)) {
            max_dif_index = i;
            max_dif = abs(a - b);
        }
        A[i] = a;
        B[i] = b;
    }

    ll ans = 0;

    for (ll i = 0; i < N; i++) {
        if (max_dif_index == i) {
            ans += B[i];
        } else {
            ans += A[i];
        }
    }

    cout << ans;
}
