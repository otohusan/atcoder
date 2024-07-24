#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    set<tuple<ll, ll, char>> S;

    for (ll i = 0; i < N; i++) {
        ll a;
        cin >> a;

        S.insert({a, i, 'A'});
    }

    for (ll i = 0; i < M; i++) {
        ll b;
        cin >> b;

        S.insert({b, i, 'B'});
    }

    vector<ll> ans_A;
    vector<ll> ans_B;

    ll i = 1;
    for (auto s : S) {
        if (get<2>(s) == 'A')
            ans_A.push_back(i);
        if (get<2>(s) == 'B')
            ans_B.push_back(i);

        i++;
    }

    for (auto a : ans_A)
        cout << a << " ";
    cout << endl;
    for (auto a : ans_B)
        cout << a << " ";
}
