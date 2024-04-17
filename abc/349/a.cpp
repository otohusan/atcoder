#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;
    vector<int> A(N - 1);

    for (int i = 0; i < N - 1; i++) {
        int a;
        cin >> a;

        ans += a;
    }

    if (ans <= 0) {
        cout << abs(ans);
    } else {
        cout << "-" << ans;
    }
}
