#include <iostream>
#include "Agent.h"

using namespace std;

void result(Agent agent,string from, string to){

    vector<string> path = agent.findSPath(from, to);

    cout <<"Shortest Path : ";

    for(string name : path){
        cout<< name << " ";
    }
    cout<< "\n";
}

int main(int argc, char const *argv[])
{
    Graph graph; // initialize the environment

// populate the environment with required cities and distance between them
    graph.addEdge("Thunder Bay", "Winnipeg", 700.0);
    graph.addEdge("Thunder Bay", "Minnepolis", 550.0);
    graph.addEdge("Thunder Bay", "Kenora", 480.0);
    graph.addEdge("Kenora", "Saskatoon", 920.0);
    graph.addEdge("Saskatoon", "Edmonoton", 525.0);
    graph.addEdge("Edmonton", "Jasper", 365.0);
    graph.addEdge("Jasper", "Vancouver", 795.0);
    graph.addEdge("Minnepolis", "Fargo", 350.0);
    graph.addEdge("Fargo", "Billings", 1020.0);
    graph.addEdge("Billings", "Skapone", 800.0);
    graph.addEdge("Skapone", "Vancouver", 460.0);
    graph.addEdge("Winnipeg", "Regina", 570.0);
    graph.addEdge("Regina", "Calgary", 760.0);
    graph.addEdge("Calgary", "Kamloops", 600.0);
    graph.addEdge("Kamloops", "Vancouver", 350.0);

    
    
    

    Agent agent(graph); // agent ready to traverse the environment

    // 3 required use cases
    // result() acts as a helper function to evaluate shortest path between given cities
    result(agent, "Thunder Bay","Vancouver");
    result(agent, "Thunder Bay","Winnipeg");
    result(agent, "Winnipeg","Billings");
    

    cout<< endl;



    return 0;
}

