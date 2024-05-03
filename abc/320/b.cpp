#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    ll ans = 0;

    for (int i = 0; i < S.size() - 1; i++) {
        for (int j = 0; j < S.size() - i + 1; j++) {
            string s = S.substr(i, j);
            string s_r = s;
            reverse(s_r.begin(), s_r.end());

            if (s == s_r) {
                ans = max(ans, (ll)s.length());
            }
        }
    }

    cout << ans;
}
