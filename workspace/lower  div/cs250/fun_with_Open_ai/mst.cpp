#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits.h>

using namespace std;

#define INF INT_MAX

int V; // number of vertices
vector<pair<int, int> > adj[20]; // adjacency list

// prints the constructed MST stored in parent[]
void printMST(int parent[])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << "\t" << adj[i][parent[i]].second << "\n";
}

// A utility function to find the vertex with minimum key
// value, from the set of vertices not yet included in MST
int minKey(int key[], bool mstSet[])
{
    // Initialize min value
    int min = INF, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

// Function to construct and print MST for a graph represented
// using adjacency matrix representation
void primMST()
{
    int parent[V]; // Array to store constructed MST
    int key[V]; // Key values used to pick minimum weight edge in cut
    bool mstSet[V]; // To represent set of vertices not yet included in MST

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
        key[i] = INF, mstSet[i] = false;

    // Always include first 1st vertex in MST.
    key[0] = 0; // Make key 0 so that this vertex is
                // picked as first vertex
    parent[0] = -1; // First node is always root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick thd minimum key vertex from the set of vertices
        // not yet included in MST
        int u = minKey(key, mstSet);

        // Add the picked vertex to the MST Set
        mstSet[u] = true;

        // Update key value and parent index of the adjacent
        // vertices of the picked vertex. Consider only those
        // vertices which are not yet included in MST
        for (int v = 0; v < V; v++)

            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (adj[u][v].second && mstSet[v] == false && adj[u][v].second < key[v])
                parent[v] = u, key[v] = adj[u][v].second;
    }

    // print the constructed MST
    printMST(parent);
}

// Driver code
int main()
{
    // Let us create following weighted graph
    //             10
    //        0--------1
    //        |  \     |
    //       6|   5\   |15
    //        |      \ |
    //        2--------3
    //            4
   
    V = 4; // Number of vertices in graph
    int E = 5; // Number of edges in graph
    int graph[4][4] = { { 0, 10, 6, 5 },
                        { 10, 0, 0, 15 },
                        { 6, 0, 0, 4 },
                        { 5, 15, 4, 0 } };
 
 	// Initialize the adjacency list
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            adj[i].push_back(make_pair(j, graph[i][j]));

    // Print the solution
    primMST();

    return 0;
}