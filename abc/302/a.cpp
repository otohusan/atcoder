#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll A, B;
    cin >> A >> B;

    if (A % B == 0) {
        cout << A / B;
    } else {
        cout << A / B + 1;
    }
}
