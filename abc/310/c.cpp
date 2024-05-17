#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    set<string> Store;
    ll ans = 0;

    for (ll i = 0; i < N; i++) {
        string S;
        cin >> S;

        if (Store.count(S))
            continue;

        Store.insert(S);
        reverse(S.begin(), S.end());
        Store.insert(S);
        ans++;
    }

    cout << ans;
}
