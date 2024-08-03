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

    for (int i = 1; i < N; i++) {
        int ans = 0;

        for (int j = 0; j < N - i; j++) {
            if (S[j] == S[j + i]) {
                break;
            }

            ans++;
        }

        cout << ans << endl;
    }
}
