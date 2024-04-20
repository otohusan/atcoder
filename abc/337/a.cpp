#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N;
    cin >> N;

    ll Takahashi = 0, Aoki = 0;

    for (int i = 0; i < N; i++) {
        ll t, a;
        cin >> t >> a;

        Takahashi += t;
        Aoki += a;
    }

    if (Takahashi > Aoki) {
        cout << "Takahashi";
    } else if (Takahashi < Aoki) {
        cout << "Aoki";
    } else {
        cout << "Draw";
    }
}
