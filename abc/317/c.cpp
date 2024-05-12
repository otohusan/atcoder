#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int N, M;
vector<pair<int, int>> adj[11]; // 隣接リスト（ノード番号と道路の長さ）

void dfs(int current, vector<bool> &visited, ll pathLength, ll &maxLength) {
    bool isEnd = true;
    for (auto &edge : adj[current]) {
        int next = edge.first;
        int length = edge.second;
        if (!visited[next]) {
            visited[next] = true;
            isEnd = false;
            dfs(next, visited, pathLength + length, maxLength);
            visited[next] = false;
        }
    }
    if (isEnd) { // これ以上訪れる場所がない場合
        maxLength = max(maxLength, pathLength);
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        adj[A].push_back({B, C});
        adj[B].push_back({A, C});
    }

    ll maxLength = 0;
    for (int i = 1; i <= N; i++) {
        vector<bool> visited(N + 1, false);
        visited[i] = true;
        dfs(i, visited, 0, maxLength); // 各ノードから探索を開始
    }

    cout << maxLength << endl;
    return 0;
}
