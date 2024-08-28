#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    if (S.size() != 8) {
        cout << "No";
        return 0;
    }

    if (!isupper(S[0]) || !isupper(S[S.size() - 1])) {
        cout << "No";
        return 0;
    }

    string di;

    for (int i = 1; i < S.size() - 1; i++) {
        if (!isdigit(S[i])) {
            cout << "No";
            return 0;
        }

        di += S[i];
    }

    int num = stoi(di);
    if (num < 100000 || num > 999999) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes";
}
