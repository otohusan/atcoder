#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll D;
    cin >> D;

    ll ans = 100000000001;
    double rd = sqrt(D);

    for (ll i = 0; i < rd; i++) {

        if (i * i - D >= 0) {
            ans = min(ans, i * i - D);
        } else {
            ll y = sqrt(D - i * i);
            ans = min(ans, abs(i * i + y * y - D));
            ans = min(ans, abs(i * i + (y + 1) * (y + 1) - D));
        }
    }

    cout << ans;
}
