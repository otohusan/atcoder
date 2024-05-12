#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    string ans = "";

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'a')
            continue;
        if (S[i] == 'i')
            continue;
        if (S[i] == 'e')
            continue;
        if (S[i] == 'o')
            continue;
        if (S[i] == 'u')
            continue;

        ans += S[i];
    }

    cout << ans;
}
