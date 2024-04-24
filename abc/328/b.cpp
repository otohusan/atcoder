#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool hantei(ll i, ll j) {
    string st = to_string(i);
    string sv = to_string(j);

    st += sv;

    char c_v = st[0];
    bool flag = true;

    for (int i = 1; i < st.size(); i++) {
        if (c_v != st[i]) {
            flag = false;
        }
    }

    return flag;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> D(N);
    for (auto &d : D)
        cin >> d;

    ll ans = 0;

    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < D[i - 1] + 1; j++) {
            bool flag = hantei(i, j);

            if (flag)
                ans++;
        }
    }

    cout << ans;
}
