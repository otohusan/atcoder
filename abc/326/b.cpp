#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N;
    cin >> N;

    for (int i = N; i < 920; i++) {
        int v = i;

        int keta1 = v % 10;
        v /= 10;
        int keta2 = v % 10;
        v /= 10;
        int keta3 = v % 10;

        if (keta3 * keta2 == keta1) {
            cout << i;
            return 0;
        }
    }
}
