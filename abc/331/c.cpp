#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N;
    cin >> N;
    ll max_v = -1;
    vector<ll> A(N);
    map<ll, ll> M;
    for (int i = 0; i < N; i++) {
        ll a;
        cin >> a;

        max_v = max(max_v, a);

        A[i] = a;

        M[a] += a;
    }

    map<ll, ll> R;
    ll former_v = -1;
    for (auto m : M) {
        if (R.empty()) {
            R[m.first] = m.second;
            former_v = m.first;
        } else {
            R[m.first] = m.second + R[former_v];
            former_v = m.first;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << R[max_v] - R[A[i]] << " ";
    }
}
