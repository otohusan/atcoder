#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

bool chack(string T, string S) {
    ll l = 0, r = 0;
    bool flag = false;

    if (abs((int)S.length() - (int)T.length()) >= 2) {
        return false;
    }

    for (l = 0; l < min(S.length(), T.length()); ++l) {
        if (S[l] != T[l])
            break;
    }
    for (r = 0; r < min(S.length(), T.length()); ++r) {
        if (S[S.length() - 1 - r] != T[T.length() - 1 - r])
            break;
    }
    if (S.length() == T.length() && l == S.length())
        flag = true;
    if (S.length() + 1 == T.length() && r + l == S.length())
        flag = true;
    if (S.length() - 1 == T.length() && r + l == T.length())
        flag = true;
    if (S.length() == T.length() && r + l + 1 == T.length())
        flag = true;

    return flag;
}

int main() {
    ll N;
    cin >> N;
    string T;
    cin >> T;
    vector<string> S(N);
    vector<ll> ans;
    for (auto &s : S)
        cin >> s;

    for (ll i = 0; i < N; i++) {
        if (chack(T, S[i])) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << endl;

    for (auto a : ans)
        cout << a << " ";
}
