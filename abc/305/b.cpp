#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    char p, q;
    cin >> p >> q;

    if (p > q)
        swap(p, q);

    int sum = 0;

    if (q == 'A')
        sum += 0;
    if (q == 'B')
        sum += 3;
    if (q == 'C')
        sum += 4;
    if (q == 'D')
        sum += 8;
    if (q == 'E')
        sum += 9;
    if (q == 'F')
        sum += 14;
    if (q == 'G')
        sum += 23;

    if (p == 'A')
        sum -= 0;
    if (p == 'B')
        sum -= 3;
    if (p == 'C')
        sum -= 4;
    if (p == 'D')
        sum -= 8;
    if (p == 'E')
        sum -= 9;
    if (p == 'F')
        sum -= 14;
    if (p == 'G')
        sum -= 23;

    cout << sum;
}
