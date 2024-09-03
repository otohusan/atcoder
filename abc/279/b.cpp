#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S, T;
    cin >> S >> T;

    if (S.length() < T.length()) {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < S.length() - T.length() + 1; i++) {
        if (T == S.substr(i, T.length())) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
