#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N;
    cin >> N;
    vector<ll> W(N), X(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i] >> X[i];
    }

    ll ans = 0;

    for (int i = 0; i < 25; i++) {
        ll sum = 0;

        for (int j = 0; j < N; j++) {
            int jikan = (i + X[j]) % 24;
            if (jikan >= 9 && jikan < 18) {
                sum += W[j];
            }
        }

        ans = max(ans, sum);
    }

    cout << ans;
}
