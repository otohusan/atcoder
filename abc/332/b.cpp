#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll K, G, M;
    cin >> K >> G >> M;

    int GW = 0, MW = 0;

    for (int i = 0; i < K; i++) {
        if (GW == G) {
            GW = 0;
        } else if (MW == 0) {
            MW = M;
        } else {
            if (MW + GW >= G) {
                MW = (MW + GW) - G;
                GW = G;
            } else {
                GW = MW;
                MW = 0;
            }
        }
    }

    cout << GW << " " << MW;
}
