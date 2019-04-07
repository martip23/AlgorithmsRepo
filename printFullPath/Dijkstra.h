//
// https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/
// Modified by Greg LaKomski  3/25/2019
//


#include<iostream>
#include<cmath>
#include<cstdio>
#include<utility>
#include<vector>
#include<queue>
#include<stack>
#include<cstdint>

// Program to find Dijkstra's shortest path using
// priority_queue in STL and print distance and path


# define INF 0xDEADBEEF

void shortestPath(std::vector<std::pair<int,int> > adj[], int V, int src);

void addEdge(std::vector <std::pair<int, int> > adj[], int u,
             int v, int wt);





// To add an edge
void addEdge(std::vector <std::pair<int, int> > adj[], int u,
             int v, int wt)
{
  adj[u].push_back(std::make_pair(v, wt));
  adj[v].push_back(std::make_pair(u, wt));
}


// Prints shortest paths from src to all other vertices
void shortestPath(std::vector<std::pair<int,int> > adj[], int V, int src)
{
  // Create a priority queue to store vertices that
  // are being preprocessed. This is weird syntax in C++.
  // Refer below link for details of this syntax
  // http://geeksquiz.com/implement-min-heap-using-stl/
  // NOTE: Priority queue of pairs in C++ (Ordered by first)
  std::priority_queue< std::pair<int, int>, std::vector <std::pair<int, int>> , std::greater<std::pair<int, int>> > pq;

  // Create a vector for distances and initialize all
  // distances as infinite (INF)
  /**
   * Note, inf doesn't work since it's a max min value
   */
  std::vector<int> dist(V, INT32_MAX);

  // Parent vector to be able to print the path

  std::vector<int> parent (V,0);

  // Insert source itself in priority queue and initialize
  // its distance as 0.
  /**
   * Weight first, then src
   */
  pq.push(std::make_pair(0, src));
  dist[src] = 0;


  /* Looping till priority queue becomes empty (or all
  distances are not finalized) */
    while (!pq.empty()) {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)

        // extract the vertex u with min distance form source
        int currVertex = pq.top().second; // Will grab the next vertex
        pq.pop();
        // For all adjacent vertices of u.
        for (auto i : adj[currVertex]) {

            // Get vertex label and weight of current adjacent
            // of u.
            auto edgeWeight = i.second;


            int altPathDistance = edgeWeight + dist[currVertex];

            // If {u,v} can be relaxed
            if (altPathDistance < dist[i.first]) {


                // Updating distance of v and update parent vertex
                dist[i.first] = altPathDistance;
                pq.push(std::make_pair(dist[i.first], i.first));
            }
        }
    }
    // Print shortest distance to each vertex from source stored in dist[]
    // Print the path from source to the vertex double space seperated
    std::cout << "Vertex  \tDistance from SRC" << std::endl;
    for (int i = 0; i < dist.size(); i++)
        std::printf("%d           %d\n", i, dist[i]);
}
