#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    string S;
    cin >> N >> S;

    bool toggle = false;

    for (int i = 0; i < N; i++) {
        if (S[i] == '"') {
            toggle = !toggle;
            continue;
        }

        if (S[i] == ',' && !toggle) {
            S[i] = '.';
            continue;
        }
    }

    cout << S;
}
