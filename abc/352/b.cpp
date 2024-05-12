#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S, T;
    cin >> S >> T;

    ll S_index = 0;

    for (int i = 0; i < T.size(); i++) {
        if (T[i] == S[S_index]) {
            S_index++;
            cout << i + 1 << " ";
        }
    }
}
