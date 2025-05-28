#include<iostream>
#include<queue>
using namespace std;

int main() {
    int nodes;
    cin >> nodes;

    int graph[nodes][nodes];
    for (int i = 0; i < nodes; i++)
        for (int j = 0; j < nodes; j++)
            graph[i][j] = (i == j) ? 0 : -1;

    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        graph[n1][n2] = 1;
        graph[n2][n1] = 1;
    }

    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < nodes; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    // BFS starts here
    int start = 1;
    int visited[nodes] = {0};
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    cout << "\nBFS Traversal:\n";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i = 0; i < nodes; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    return 0;
}
