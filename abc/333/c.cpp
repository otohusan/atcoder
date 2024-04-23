#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N;
    cin >> N;

    vector<ll> S = {1,         11,         111,         1111,
                    11111,     111111,     1111111,     11111111,
                    111111111, 1111111111, 11111111111, 111111111111};

    set<ll> ans;
    for (int i = 0; i < S.size(); i++) {
        for (int j = 0; j < S.size(); j++) {
            for (int z = 0; z < S.size(); z++) {

                ans.insert(S[i] + S[j] + S[z]);
            }
        }
    }

    int count = 0;
    for (auto a : ans) {
        count++;
        if (count == N) {
            cout << a;
        }
    }
}
