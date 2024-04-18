#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    vector<int> A;

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            int x;
            cin >> x;

            A.push_back(x);
        } else {
            int x;
            cin >> x;

            cout << A[A.size() - x] << endl;
        }
    }
}
