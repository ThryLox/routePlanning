
#include "Graph.h"


using namespace std;


// addign edges (joining cities to get the desired map )
void Graph :: addEdge(string from, string to, float weight){

    adjList[from].push_back(Edge(to,weight));
    adjList[to].push_back(Edge(from, weight));
}

vector<Edge> Graph::getEdges(string name){
    return adjList[name];
}