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

    for (int i = 0; i < N - 1; i++) {
        if (S[i] == S[i + 1]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
