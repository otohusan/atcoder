#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int x, y = 0;
    set<pair<int, int>> P = {{x, y}};

    for (int i = 0; i < N; i++) {
        if (S[i] == 'U')
            y++;
        if (S[i] == 'R')
            x++;
        if (S[i] == 'D')
            y--;
        if (S[i] == 'L')
            x--;

        if (P.count({x, y})) {
            cout << "Yes";
            return 0;
        }

        P.insert({x, y});
    }

    cout << "No";
}
