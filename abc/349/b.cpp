#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    map<char, int> F;
    map<int, int> ans;

    for (int i = 0; i < S.size(); i++) {
        F[S[i]]++;
    }

    for (auto a : F) {
        ans[a.second]++;
    }

    bool flag = true;

    for (auto a : ans) {
        if (a.second != 2) {
            flag = false;
        }
    }

    cout << (flag ? "Yes" : "No");
}
