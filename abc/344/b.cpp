#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> A;

    for (int i = 0; i < 101; i++) {
        int a;
        cin >> a;

        A.push(a);

        if (a == 0)
            break;
    }

    while (!A.empty()) {
        int ans = A.top();
        A.pop();
        cout << ans << endl;
    }
}
