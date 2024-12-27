#include <bits/stdc++.h>
using namespace std;

// Function to add an edge to the graph
void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // For undirected graph
}

// BFS function
void bfs(const vector<vector<int>>& adj, int start) {
    set<int> visited;
    queue<int> q;

    visited.insert(start);
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // Process the node

        for (int neighbor : adj[node]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
}

// DFS helper function
void dfsHelper(const vector<vector<int>>& adj, int node, set<int>& visited) {
    visited.insert(node);
    cout << node << " "; // Process the node

    for (int neighbor : adj[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfsHelper(adj, neighbor, visited);
        }
    }
}

// DFS function
void dfs(const vector<vector<int>>& adj, int start) {
    set<int> visited;
    dfsHelper(adj, start, visited);
}

int main() {
    int vertices = 4; // Number of vertices
    vector<vector<int>> adj(vertices); // Adjacency list

    // Adding edges
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);

    cout << "BFS starting from node 2:\n";
    bfs(adj, 2);

    cout << "\nDFS starting from node 2:\n";
    dfs(adj, 2);

    return 0;
}