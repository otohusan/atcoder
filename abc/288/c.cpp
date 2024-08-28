#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// Union-Findデータ構造
struct UnionFind {
    vector<int> parent, rank;

    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY])
                swap(rootX, rootY);
            parent[rootY] = rootX;
            if (rank[rootX] == rank[rootY])
                rank[rootX]++;
            return true;
        }
        return false;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> edges(M);

    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        edges[i] = {A - 1, B - 1}; // 0-indexedに調整
    }

    UnionFind uf(N);
    int redundantEdges = 0;

    for (const auto &[A, B] : edges) {
        if (!uf.unite(A, B)) {
            redundantEdges++;
        }
    }

    cout << redundantEdges << endl;
    return 0;
}
