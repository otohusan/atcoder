#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    int r_count = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'R')
            r_count++;

        if (S[i] == 'M' && r_count) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
