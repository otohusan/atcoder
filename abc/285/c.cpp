#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    ll ans = 0;

    reverse(S.begin(), S.end());

    int keta = 0;
    for (auto s : S) {
        ll keta_sum = 1;
        for (int i = 0; i < keta; i++) {
            keta_sum *= 26;
        }

        ans += keta_sum * ((int)s - 'A' + 1);

        keta++;
    }

    cout << ans;
}
