#include <iostream>
#include "Agent.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Graph graph;

    graph.addEdge("A", "B", 1.0);
    graph.addEdge("A", "C", 1.0);
    graph.addEdge("B", "D", 1.0);
    graph.addEdge("C", "D", 2.0);
    graph.addEdge("D", "E", 1.0);
    
    

    Agent agent(graph);

    vector<string> path = agent.findSPath("A", "E");

    cout <<"Shortest Path : ";

    for(string name : path){
        cout<< name << " ";
    }

    cout<< endl;

    return 0;
}
