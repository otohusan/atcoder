#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    int count = 0;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        if (s == "For") {
            count++;
        } else {
            count--;
        }
    }

    cout << (count >= 0 ? "Yes" : "No");
}
