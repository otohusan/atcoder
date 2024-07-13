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
        string w;
        cin >> w;

        if (w == "and") {
            cout << "Yes";
            return 0;
        }
        if (w == "not") {
            cout << "Yes";
            return 0;
        }
        if (w == "that") {
            cout << "Yes";
            return 0;
        }
        if (w == "the") {
            cout << "Yes";
            return 0;
        }
        if (w == "you") {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
