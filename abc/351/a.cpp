#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int ans = 0;

    int A = 0;

    for (int i = 0; i < 9; i++) {
        int a;
        cin >> a;

        A += a;
    }

    int B = 0;

    for (int i = 0; i < 8; i++) {
        int a;
        cin >> a;

        B += a;
    }

    cout << A - B + 1;
}
