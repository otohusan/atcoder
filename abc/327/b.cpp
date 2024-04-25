#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll B;
    cin >> B;

    ll ans = -1;

    for (int i = 0; i < 16; i++) {
        ll f = i;

        for (int j = 0; j < i - 1; j++) {
            f *= i;
        }

        if (f == B) {
            ans = i;
            break;
        }
    }

    cout << ans;
}
