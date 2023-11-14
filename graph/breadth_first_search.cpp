#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(int startVertex, const vector<vector<int>>& adjList) {
    int vertices = adjList.size();
    vector<bool> visited(vertices, false);
    queue<int> q;

    visited[startVertex] = true;
    q.push(startVertex);

    while (!q.empty()) {
        int currentVertex = q.front();
        cout << currentVertex << " "; //printing the result
        q.pop();

     /*    for (int adjacentVertex : adjList[currentVertex]) {
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = true;
                q.push(adjacentVertex);
            }
        } */

        for (int i = 0; i < adjList[currentVertex].size(); ++i)
        {
            int adjacentVertex = adjList[currentVertex][i];
            if (visited[adjacentVertex]!=true)
            {
                visited[adjacentVertex] = true;
                q.push(adjacentVertex);
            }
        }
    }
}

int main() {
    int vertices,edges,startVertex;
   cout<<"Enter the number of nodes/vertices : ";
   cin>>vertices;
   
   cout<<"Enter the number of edges : ";
   cin>>edges;

    // Adjacency list representation of the graph
    vector<vector<int>> adjList(vertices);
    int source, dest;
    cout<<"Enter the connected nodes: \n";

   for(int i=0;i<edges;i++)

   {
     cin>>dest>>source;
     adjList[dest].push_back(source);
   }
   
   cout<<"Enter the starting source node: ";
    // Starting vertex for BFS
    cin>>startVertex;

    cout << "BFS starting from vertex " << startVertex << ": ";
    bfs(startVertex, adjList);

    return 0;
}


