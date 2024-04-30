#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    string ans = "Yes";

    for (int i = 1; i < S.size(); i += 2) {
        if (S[i] != '0') {
            ans = "No";
        }
    }

    cout << ans;
}
