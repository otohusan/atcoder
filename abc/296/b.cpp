#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    vector<string> S(8);
    for (auto &s : S)
        cin >> s;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (S[i][j] == '*') {
                cout << (char)('a' + j) << 8 - i;
            }
        }
    }
}
