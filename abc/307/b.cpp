#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    for (ll i = 0; i < N + 1; i++) {
        for (ll j = i + 1; j < N; j++) {

            string s = S[i] + S[j];
            string x_s = S[j] + S[i];
            string r_s = s;
            string x_r_s = x_s;
            reverse(r_s.begin(), r_s.end());
            reverse(x_r_s.begin(), x_r_s.end());

            if (s == r_s || x_s == x_r_s) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}
