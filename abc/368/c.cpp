#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    vector<ll> H(N);
    for (auto &h : H)
        cin >> h;

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        ans += (H[i] / 5) * 3;
        ll amari = H[i] % 5;
        H[i] = amari;

        for (int j = 0; j < amari; j++) {
            ans++;

            if (ans % 3 == 0) {
                H[i] -= 3;
            } else {
                H[i] -= 1;
            }

            if (H[i] <= 0) {
                break;
            }
        }
    }

    cout << ans;
}
