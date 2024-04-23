#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    ll ans = 1000000001;

    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            for (int z = 0; z < 101; z++) {
                ll q = 6 * i + 8 * j + 12 * z;
                ll p = i * S + j * M + z * L;
                if (q >= N) {
                    ans = min(ans, p);
                }
            }
        }
    }

    cout << ans;
}
