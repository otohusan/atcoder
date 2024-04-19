#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, Q;
    string S;
    cin >> N >> S >> Q;

    map<char, char> list;
    string to, from;
    to = from = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < Q; i++) {
        char c, d;
        cin >> c >> d;

        for (int j = 0; j < to.size(); j++) {
            if (to[j] == c) {
                to[j] = d;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < from.size(); j++) {
            if (S[i] == from[j]) {
                S[i] = to[j];
                break;
            }
        }
    }

    cout << S;
}
