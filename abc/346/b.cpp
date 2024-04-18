#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, B;
    cin >> W >> B;

    string S = "wbwbwwbwbwbwwbw";
    bool ans = false;

    for (int i = 0; i < W + B; i++) {
        map<char, int> m;

        for (int j = i % 12; j < W + B; j++) {
            m[S[j % 12]]++;

            if (m['w'] == W && m['b'] == B)
                ans = true;
        }
    }
    cout << (ans ? "Yes" : "No");
}
