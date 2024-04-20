#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    string S;
    cin >> S;

    bool flag = false;

    string ans;
    ans += S[0];

    vector<string> ac_pattern = {"A", "B", "C", "AB", "AC", "BC", "ABC"};

    for (int i = 1; i < S.size(); i++) {
        if (S[i] != S[i - 1]) {
            ans += S[i];
        }
    }

    for (int i = 0; i < ac_pattern.size(); i++) {
        if (ans == ac_pattern[i])
            flag = true;
    }

    cout << (flag ? "Yes" : "No");
}
