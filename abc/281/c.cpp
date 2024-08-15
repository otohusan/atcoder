#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, T;
    cin >> N >> T;
    vector<ll> A(N);
    ll sum = 0;
    for (auto &a : A) {
        cin >> a;
        sum += a;
    }

    T %= sum;

    for (ll i = 0; i < N; i++) {

        if (T - A[i] < 0) {
            cout << i + 1 << " " << T;
            break;
        }

        T -= A[i];
    }
}
