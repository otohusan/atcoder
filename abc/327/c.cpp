#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    vector<vector<int>> A(9, vector<int>(9));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> A[i][j];
        }
    }

    set<int> S;

    string ans = "Yes";

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            S.insert(A[i][j]);
        }

        if (S.size() != 9) {
            ans = "No";
        }

        S.clear();
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            S.insert(A[j][i]);
        }

        if (S.size() != 9) {
            ans = "No";
        }

        S.clear();
    }

    for (int x = 0; x < 9; x += 3) {
        for (int y = 0; y < 9; y += 3) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    S.insert(A[i + x][j + y]);
                }
            }
            if (S.size() != 9) {
                ans = "No";
            }

            S.clear();
        }
    }

    cout << ans;
}
