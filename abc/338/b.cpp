#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    map<char, int> M;

    for (int i = 0; i < S.size(); i++) {
        M[S[i]]++;
    }

    char ans;
    int max = -1;
    for (auto m : M) {
        if (max < m.second) {
            ans = m.first;
            max = m.second;
        }
    }

    cout << ans;
}
