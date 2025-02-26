#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int to;
};

class Tree {
public:
    int n;
    vector<vector<Edge>> adj;
    vector<int> depth;

    Tree(int n) : n(n), adj(n + 1), depth(n + 1, 0) {}

    void addEdge(int u, int v) {
        adj[u].push_back({v});
        adj[v].push_back({u});
    }

    void bfs(int start) {
        vector<bool> visited(n + 1, false);
        queue<int> q;
        q.push(start);
        visited[start] = true;
        depth[start] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (const auto& edge : adj[node]) {
                if (!visited[edge.to]) {
                    visited[edge.to] = true;
                    depth[edge.to] = depth[node] + 1;
                    q.push(edge.to);
                }
            }
        }
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        Tree tree(n);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            tree.addEdge(u, v);
        }

        tree.bfs(1); // Start BFS from the root node 1

        int q;
        cin >> q;
        while (q--) {
            int vi, ki;
            cin >> vi >> ki;

            // Calculate the maximum distance reachable
            if (ki >= tree.depth[vi]) {
                cout << tree.n - 1 << " "; // All vertices can be reached
            } else {
                int maxDistance = 0;
                for (int j = 1; j <= n; j++) {
                    if (tree.depth[j] <= ki) {
                        maxDistance = max(maxDistance, tree.depth[j]);
                    }
                }
                cout << maxDistance << " ";
            }
        }
        cout << endl;
    }

    return 0;
}