#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M, P;
    cin >> N >> M >> P;

    ll ans = 0;

    for (int i = M; i < N + 1; i += P) {
        ans++;
    }

    cout << ans;
}
