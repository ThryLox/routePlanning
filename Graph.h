#ifndef GRAPH_H
#define GRAPH_H


#include <string>
#include <vector>
#include <unordered_map>
#include "Edge.h"


using namespace std;

class Graph
{
private:
    unordered_map <string, vector<Edge>> adjList; // stored name of the node (city) and its edges

public:
    void addEdge(string from, string to, float weight);
    vector<Edge> getEdges(string name);
    
};

#endif