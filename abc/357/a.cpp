#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;

    int ans = 0;

    for (ll i = 0; i < N; i++) {
        int H;
        cin >> H;

        if (M >= H) {
            M -= H;
            ans++;
        } else {
            break;
        }
    }

    cout << ans;
}
