#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    string S;
    cin >> N >> S;

    ll T = 0, A = 0;

    for (ll i = 0; i < N; i++) {
        if (S[i] == 'T')
            T++;
        else
            A++;
    }

    64P2z.AF6L20YLl +

        if (A == T) {
        if (S[N - 1] == 'T')
            cout << 'A';
        else
            cout << "T";

        return 0;
    }

    if (A > T)
        cout << "A";
    else
        cout << "T";
}
