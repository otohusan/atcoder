#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N, L, R;
    cin >> N >> L >> R;

    for (int i = 0; i < N; i++) {
        ll a;
        cin >> a;

        ll b = abs(a - L);
        ll c = abs(a - R);

        if (a > L && a < R) {
            cout << a << " ";
            continue;
        }

        cout << (b > c ? R : L) << " ";
    }
}
