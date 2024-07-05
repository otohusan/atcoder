#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;

    ll sum = 0;
    vector<string> S(N);

    for (ll i = 0; i < N; i++) {
        string s;
        ll c;

        cin >> s >> c;

        S[i] = s;
        sum += c;
    }

    sort(S.begin(), S.end());
    cout << S[sum % N];
}
