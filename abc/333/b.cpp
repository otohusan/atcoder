#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    vector<char> S(2);
    cin >> S[0] >> S[1];
    vector<char> T(2);
    cin >> T[0] >> T[1];

    int type1 = 2;
    int type2 = 2;
    if (S[0] > S[1])
        swap(S[0], S[1]);

    int sa = abs(S[0] - S[1]);
    if (sa == 1 || sa == 4) {
        type1 = 1;
    }

    if (T[0] > T[1])
        swap(T[0], T[1]);
    sa = abs(T[0] - T[1]);

    if (sa == 1 || sa == 4) {
        type2 = 1;
    }

    cout << (type1 == type2 ? "Yes" : "No");
}
