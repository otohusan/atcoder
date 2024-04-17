#include <bits/stdc++.h>
using namespace std;

int main() {
    long long S;
    cin >> S;

    int amari = S % 10;
    long long ans = S / 10;

    if (ans <= 0 && S < 0) {
        cout << ans;
    } else if (amari != 0) {
        cout << ans + 1;
    } else {
        cout << ans;
    }
}
