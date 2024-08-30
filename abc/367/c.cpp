#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void generateCombinations(int N, int K, const vector<int> &R,
                          vector<int> &combination, int index, int sum) {
    if (index == N) {
        if (sum % K == 0) {
            for (int num : combination) {
                cout << num << " ";
            }
            cout << endl;
        }
        return;
    }

    for (int i = 1; i <= 5; i++) {
        if (i <= R[index]) {
            combination[index] = i;
            generateCombinations(N, K, R, combination, index + 1, sum + i);
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for (auto &r : R)
        cin >> r;

    vector<int> combination(N);
    generateCombinations(N, K, R, combination, 0, 0);

    return 0;
}
