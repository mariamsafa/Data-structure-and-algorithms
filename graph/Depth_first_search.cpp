#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void dfs(int startVertex, const vector<vector<int>>& adjList) {
    int vertices = adjList.size();
    vector<bool> visited(vertices, false);
    stack<int> s;

    // Push the start vertex onto the stack
    s.push(startVertex);

    while (!s.empty()) {
        int currentVertex = s.top();
        s.pop();

        // Process the current vertex if not visited
        if (visited[currentVertex]!=true) {
            cout << currentVertex << " ";
            visited[currentVertex] = true;
        }

        // Push unvisited neighbors onto the stack
        for (int i = adjList[currentVertex].size() - 1; i >= 0; --i) {
            int adjacentVertex = adjList[currentVertex][i];
            if (visited[adjacentVertex]!=true) {
                s.push(adjacentVertex);
            }
        }
       
    }
}

int main() {
    // Number of vertices
    int vertices = 6;

    // Adjacency list representation of the graph
    vector<vector<int>> adjList(vertices);

    // Add edges
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(3);
    adjList[1].push_back(4);
    adjList[2].push_back(4);
    adjList[3].push_back(5);
    adjList[4].push_back(5);

    // Starting vertex for DFS
    int startVertex = 0;

    cout << "DFS starting from vertex " << startVertex << ": ";
    dfs(startVertex, adjList);

    return 0;
}
