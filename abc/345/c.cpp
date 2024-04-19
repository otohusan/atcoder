#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string S;
    cin >> S;

    map<char, ll> M;

    ll ans = S.size() * (S.size() - 1) / 2;

    for (ll i = 0; i < S.size(); i++) {
        M[S[i]]++;
    }

    bool same = false;

    for (auto m : M) {
        ll hiku = 0;
        if (m.second != 1) {
            same = true;
            hiku = m.second * (m.second - 1) / 2;
        }
        ans -= hiku;
    }

    if (same)
        ans++;

    cout << ans;
}
