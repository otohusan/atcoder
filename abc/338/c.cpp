#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<ll> Q(N), A(N), B(N);
    for (auto &a : Q)
        cin >> a;
    for (auto &a : A)
        cin >> a;
    for (auto &a : B)
        cin >> a;

    ll ans = 0;
    bool flag = true;
    ll a_kazu = 0;

    while (flag) {
        vector<ll> Q_kari = Q;

        for (int i = 0; i < N; i++) {
            if (A[i] == 0)
                continue;
            if (A[i] * a_kazu > Q_kari[i]) {
                flag = false;
                break;
            }
            Q_kari[i] -= A[i] * a_kazu;
        }

        if (!flag)
            break;

        ll b_kazu = 100000006;

        for (int i = 0; i < N; i++) {
            if (B[i] == 0)
                continue;
            b_kazu = min(b_kazu, Q_kari[i] / B[i]);
        }

        ans = max(ans, a_kazu + b_kazu);

        a_kazu++;
    }

    cout << ans;
}
