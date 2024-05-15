#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<ll> H(N);
    for (auto &h : H)
        cin >> h;
    ll k = H[0];

    for (int i = 1; i < N; i++) {
        if (k < H[i]) {
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;
}
