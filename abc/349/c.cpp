#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int index = 0;

    for (int i = 0; i < S.size(); i++) {
        if (toupper(S[i]) == T[index])
            index++;

        if (index == 3 || index == 2 && T[2] == 'X') {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
