#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    vector<pair<int, int>> T(3);
    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;

        T[i] = {a, b};
    }

    int A = ((T[0].first - T[1].first) * (T[0].first - T[1].first)) +
            ((T[0].second - T[1].second) * (T[0].second - T[1].second));
    int B = ((T[0].first - T[2].first) * (T[0].first - T[2].first)) +
            ((T[0].second - T[2].second) * (T[0].second - T[2].second));
    int C = ((T[1].first - T[2].first) * (T[1].first - T[2].first)) +
            ((T[1].second - T[2].second) * (T[1].second - T[2].second));

    if (A == B + C || B == A + C || C == A + B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
