#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

bool compare(string s) {
    string rs = s;
    reverse(rs.begin(), rs.end());

    return rs == s ? true : false;
}

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    for (ll i = 0; i < N + 1; i++) {
        for (ll j = i + 1; j < N; j++) {

            if (compare(S[i] + S[j]) || compare(S[j] + S[i])) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}
