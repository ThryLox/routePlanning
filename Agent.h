#ifndef AGENT_H
#define AGENT_H
// defining header

#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <limits>
#include "Node.h"
#include "Graph.h"


using namespace std;




class Agent
{
private:
   Graph& graph;

   //as we will be using priority queues so we need a comparator function
   struct Compare
   {
    bool operator()(const Node& a, const Node& b) ;
   };
   // to generate the path that has been computed by the agent
   vector<string> regenPath(unordered_map <string, string> & prev, string from , string to);



public:
    Agent(Graph& graph);
    vector <string> findSPath(string from, string to);
    
};


#endif