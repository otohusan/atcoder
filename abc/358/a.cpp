#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S, T;
    cin >> S >> T;

    if (S != "AtCoder" || T != "Land") {
        cout << "No";
    } else {
        cout << "Yes";
    }
}
