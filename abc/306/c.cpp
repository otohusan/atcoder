#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    map<ll, ll> M;
    ll N;
    cin >> N;

    for (ll i = 0; i < 3 * N; i++) {
        ll a;
        cin >> a;

        if (M[a] == 1) {
            cout << a << " ";
        }

        M[a]++;
    }
}
