#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    sort(S.begin(), S.end());

    do {
        ll cnt = 0;
        for (ll i = 0; i < N - 1; i++) {
            for (ll k = 0; k < M; k++) {
                if (S[i][k] != S[i + 1][k]) {
                    cnt++;
                }
            }
        }

        if (cnt < N) {
            cout << "Yes";
            return 0;
        }

    } while (next_permutation(S.begin(), S.end()));

    cout << "No";
}
