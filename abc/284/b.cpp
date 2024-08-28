#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a % 2 == 1)
                ans++;
        }

        cout << ans << endl;
    }
}
