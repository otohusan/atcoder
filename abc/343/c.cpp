#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N;
    cin >> N;

    unsigned long long ans = 0;

    for (unsigned long long i = 0; i < 1000001; i++) {
        unsigned long long K = i * i * i;
        if (K > N) {
            break;
        }
        string hanten = to_string(K);
        string mojiK = hanten;
        reverse(hanten.begin(), hanten.end());

        if (mojiK == hanten && K <= N) {
            ans = K;
        }
    }

    cout << ans;
}
