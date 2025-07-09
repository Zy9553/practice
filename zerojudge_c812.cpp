#include <bits/stdc++.h>
using namespace std;

int n, vk, q;
unordered_map<int, vector<pair<int, int>>> adj;
vector<bool> visited;
int cnt = 0;

void dfs(int node, int parent, int minweight) {
    visited[node] = true;

    if (minweight >= q) {
        cnt++;
    }

    for (auto &p : adj[node]) {
        int neighbor = p.first;
        int weight = p.second;

        if (neighbor == parent) continue;

        int next_minweight = min(minweight, weight);
        dfs(neighbor, node, next_minweight);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> vk >> q;
    for (int i = 1; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    visited.resize(n + 1, false);
    for (auto &p : adj[vk]) {
        int neighbor = p.first;
        int weight = p.second;

        dfs(neighbor, vk, weight);
    }

    cout << cnt << "\n";
    return 0;
}