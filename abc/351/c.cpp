#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> A;
    for (ll i = 0; i < N; i++) {
        int a;
        cin >> a;

        while (!A.empty() && A.back() == a) {
            a = A.back() + 1;
            A.pop_back();
        }
        A.push_back(a);
    }

    cout << A.size() << endl;
}
