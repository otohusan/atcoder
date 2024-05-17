#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, K;
    cin >> N >> K;
    ll sum = 0;
    map<ll, ll> M;

    for (ll i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;
        M[a] += b;
        sum += b;
    }

    if (sum <= K) {
        cout << 1;
        return 0;
    }

    for (auto m : M) {
        sum -= m.second;

        if (sum <= K) {
            cout << m.first + 1;
            return 0;
        }
    }
}
