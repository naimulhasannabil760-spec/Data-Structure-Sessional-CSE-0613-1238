#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    int graph[20][20] = {0};
    int u, v;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    cout << "Enter edges:" << endl;

    for(int i = 0; i < e; i++)
    {
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;   // Undirected graph
    }

    cout << "\nAdjacency Matrix:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
