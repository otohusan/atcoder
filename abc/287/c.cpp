#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

string shift(string S) {
    string res = S;

    for (int i = 0; i < S.size(); i++) {
        res[i] = S[(i + 1) % S.size()];
    }

    return res;
}

int main() {
    ll N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    ll ans = LLONG_MAX;

    for (int i = 0; i < N; i++) {
        ll B_money = 0;

        for (int j = 0; j < N / 2; j++) {
            if (S[j] != S[N - j - 1])
                B_money += B;
        }

        ans = min(ans, (A * i) + B_money);

        S = shift(S);
    }

    cout << ans;
}
