#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int z = 0; z <= N; z++) {
                if (i + j + z <= N) {
                    cout << i << " " << j << " " << z << endl;
                }
            }
        }
    }
}
