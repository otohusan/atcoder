#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll A, B;
    cin >> A >> B;

    ll ansA = A;
    ll ansB = B;

    for (int i = 0; i < B - 1; i++) {
        ansA *= A;
    }

    for (int i = 0; i < A - 1; i++) {
        ansB *= B;
    }

    cout << ansA + ansB << " ";
}
