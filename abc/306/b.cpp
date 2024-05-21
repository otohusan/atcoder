#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll sum = 0;

    for (ll i = 0; i < 64; i++) {
        ll a;
        cin >> a;

        if (a == 1) {
            ll kakeru = 1;
            for (ll j = 0; j < i; j++) {
                kakeru *= 2;
            }

            sum += kakeru;
        }
    }

    cout << sum;
}
