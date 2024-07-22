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

    int ans = -1;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'o')
            count++;

        if (S[i] == '-' && count > 0) {
            ans = max(ans, count);
            count = 0;
        }
    }

    count = 0;

    for (int i = N - 1; i >= 0; i--) {
        if (S[i] == 'o')
            count++;

        if (S[i] == '-' && count > 0) {
            ans = max(ans, count);
            count = 0;
        }
    }

    cout << ans;
}
