#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    string S;
    cin >> N >> S;

    int count = 0;

    for (auto s : S) {
        if (s == '*') {
            if (count == 1) {
                cout << "in";
            } else {
                cout << "out";
            }

            return 0;
        }

        if (s == '|')
            count++;
    }

    return 0;
}
