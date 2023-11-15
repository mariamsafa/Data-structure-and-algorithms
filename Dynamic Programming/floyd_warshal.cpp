#include <iostream>
#include <climits>

using namespace std;

void floydWarshall(long long graph[][4], int V) {
    long long dist[V][V];

    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INT_MAX)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
     long long graph[4][4] = {
        {0, 8, INT_MAX, 1},
        {INT_MAX, 0, 1, INT_MAX},
        {4, INT_MAX, 0, INT_MAX},
        {INT_MAX, 2, 9, 0}
    };

    int V = 4;

    floydWarshall(graph, V);

    return 0;
}
