#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        if (a % 2 == 0)
            cout << a << " ";
    }
}
