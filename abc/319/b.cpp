#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<int> dx = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
    int n;
    cin >> n;

    string s;
    for (int i = 0; i <= n; i++) {
        s += "-";
        for (int j = 1; j <= 9; j++) {
            if (n % j == 0 && i % (n / j) == 0) {
                s[i] = j + '0';
                break;
            }
        }
    }
    cout << s << endl;
}
