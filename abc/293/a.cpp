#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    cin >> S;

    for (int i = 0; i < S.size() - 1; i += 2) {
        swap(S[i], S[i + 1]);
    }

    cout << S;
}
