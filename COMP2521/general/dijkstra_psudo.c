int dist[]  // array of cost of shortest path from s
int pred[]  // array of predecessor in shortest path from s
bool visited[]    // vertices whose shortest path from s is unknown -> visited array
PQ  // Priority Queue, make sure it takes (node, priority)
int counter // the number of nodes that have been visited

dijkstra(Graph G, int source) {

    initialise all dist[] to INF
    dist[source]=0
    add all distances into PQ

    initialise all pred[] to -1
    initialise all visited[] to false
    
    int counter = 0
    while (counter < number of nodes) {

        curr = min item in dist that has not been visited -> pop items of the PQ until one has not been visited is found

        for each outgoing edge from curr { // (nei is the neighbour vertex, w is the edge weight)
            if (dist[curr] + w < dist[nei]) { // relax the edge
                PQ.push(nei, dist[curr] + w)
            }
        }
        set visited[curr] = true
    }
}


PQ:

// although all nodes start off as being distance INF in the PQ, 
// since we add more items to the pq which are < INF, these are popped off first
(node, priority)

(2, 4)
(1, INF)
(3, INF)
(2, INF) // perhaps you could make a PQ which would delete (2, INF) when (2, 4) is added!
