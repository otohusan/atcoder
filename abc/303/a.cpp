#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    string S, T;
    cin >> N >> S >> T;

    for (ll i = 0; i < N; i++) {
        if ((S[i] == 'l' && T[i] == '1') || (T[i] == 'l' && S[i] == '1'))
            continue;
        if ((S[i] == 'o' && T[i] == '0') || (T[i] == 'o' && S[i] == '0'))
            continue;
        if (S[i] != T[i]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
