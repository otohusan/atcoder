#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    int R_count = 0;
    int first_B_index = -1;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'R')
            R_count++;

        if (S[i] == 'K' && R_count != 1) {
            cout << "No";
            return 0;
        }

        if (S[i] == 'B') {
            if (first_B_index == -1) {
                first_B_index = i;
                continue;
            }

            if ((first_B_index % 2) == (i % 2)) {
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";
}
