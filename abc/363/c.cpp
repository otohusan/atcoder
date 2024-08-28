#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    sort(S.begin(), S.end());
    ll ans = 0;

    do {
        ans++;

        for (int i = 0; i < N - (K - 1); i++) {
            string r_S = S.substr(i, K);
            reverse(r_S.begin(), r_S.end());

            if (r_S == S.substr(i, K)) {
                ans--;
                break;
            }
        }

    } while (next_permutation(S.begin(), S.end()));

    cout << ans;
}
