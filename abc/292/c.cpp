#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    // A * B の値をカウントするためのmap
    unordered_map<int, ll> AB_count;

    // A, B をすべての組み合わせを考慮
    for (int A = 1; A <= N; ++A) {
        for (int B = 1; B <= N / A; ++B) {
            AB_count[A * B]++;
        }
    }

    ll count = 0;

    // AB_countの値を使ってCDを探す
    for (const auto &[AB, numAB] : AB_count) {
        if (AB_count[N - AB]) {
            count += numAB * AB_count[N - AB];
        }
    }

    cout << count << endl;

    return 0;
}
