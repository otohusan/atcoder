#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N;
    string S;
    cin >> N >> S;

    map<char, ll> M;

    ll renzoku = 1;
    char c_v = S[0];

    for (int i = 1; i < N; i++) {
        if (S[i] == c_v) {
            renzoku++;
        } else {
            M[c_v] = max(M[c_v], renzoku);
            c_v = S[i];
            renzoku = 1;
        }
    }

    M[c_v] = max(M[c_v], renzoku);

    ll ans = 0;

    for (auto m : M) {
        ans += m.second;
    }

    cout << ans;
}
