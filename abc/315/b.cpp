#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int M;
    cin >> M;
    vector<int> D(M);
    int sum = 0;
    for (auto &m : D) {
        cin >> m;
        sum += m;
    }

    int mid = (sum + 1) / 2;
    int count = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < D[i]; j++) {
            count++;
            if (count == mid) {
                cout << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }
}
