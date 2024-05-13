#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    ll ans = 0;

    for (ll i = 0; i < N;) {
        ll k = K;
        while (k >= A[i] && i < N) {
            k -= A[i];
            i++;
        }
        ans++;
    }
    cout << ans;
}
