#include <iostream>
#include <vector>

using namespace std;

void generate_carpet(vector<vector<char>> &carpet, int x, int y, int n) {
    if (n == 0) {
        carpet[x][y] = '#';
    } else {
        int size = 1;
        for (int i = 0; i < n - 1; ++i) {
            size *= 3;
        }

        // Create 3x3 blocks
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i == 1 && j == 1) {
                    // Center block should be empty
                    for (int dx = 0; dx < size; ++dx) {
                        for (int dy = 0; dy < size; ++dy) {
                            carpet[x + i * size + dx][y + j * size + dy] = '.';
                        }
                    }
                } else {
                    generate_carpet(carpet, x + i * size, y + j * size, n - 1);
                }
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    int size = 1;
    for (int i = 0; i < N; ++i) {
        size *= 3;
    }

    vector<vector<char>> carpet(size, vector<char>(size, '.'));
    generate_carpet(carpet, 0, 0, N);

    for (const auto &row : carpet) {
        for (const auto &cell : row) {
            cout << cell;
        }
        cout << endl;
    }

    return 0;
}
