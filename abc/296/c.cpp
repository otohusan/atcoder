#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, X;
    cin >> N >> X;

    map<ll, bool> M;

    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    for (ll i = 0; i < N; i++) {
        M[A[i]] = true;
    }

    for (ll i = 0; i < N; i++) {

        if (M[X + A[i]]) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
