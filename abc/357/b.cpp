#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    int upper = 0;
    int lower = 0;

    for (auto s : S) {
        if (isupper(s)) {
            upper++;
        } else {
            lower++;
        }
    }

    if (upper > lower) {
        for (auto &s : S)
            s = toupper(s);
    } else {
        for (auto &s : S)
            s = tolower(s);
    }

    cout << S;
}
