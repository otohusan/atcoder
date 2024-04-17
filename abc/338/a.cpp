#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (!isupper(S[0])) {
        cout << "No";
        return 0;
    }

    for (int i = 1; i < S.size(); i++) {
        if (!islower(S[i])) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
