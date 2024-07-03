#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, L, R;
    cin >> N >> L >> R;

    for (ll i = 1; i < L; i++) {
        cout << i << " ";
    }

    for (ll i = R; i >= L; i--) {
        cout << i << " ";
    }

    for (ll i = R + 1; i <= N; i++) {
        cout << i << " ";
    }
}
