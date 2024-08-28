#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    ll ans = 0;
    for (ll i = 0; i < S.size(); i++) {
        if (i + 1 < S.size() && S[i] == '0' && S[i + 1] == '0') {
            i++;
            ans++;
            continue;
        }

        ans++;
    }

    cout << ans;
}
