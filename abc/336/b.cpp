#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N;
    cin >> N;

    int ans = 0;

    string s = "";

    while (N > 0) {
        s += to_string(N % 2);
        N /= 2;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            ans++;
        } else {
            break;
        }
    }

    cout << ans;
}
