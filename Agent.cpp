#include "Agent.h"
# include <iostream>
using namespace std;



bool Agent::Compare::operator()(const Node& a, const Node& b){
    return a.dist > b.dist;
}

Agent::Agent(Graph& graph) : graph(graph){} // constructor


// agent exploration of the environment
vector<string> Agent :: findSPath(string from, string to){
    priority_queue<Node, vector<Node>, Compare> pq;
    unordered_map<string, float> dist;
    unordered_map<string, string> prev;
    unordered_map<string, bool> visited;

    dist[from] = 0;
    pq.push(Node(from,0));

    while(!pq.empty()){

        Node current = pq.top();
        
        pq.pop();

        if(visited[current.name]) continue; 
        visited[current.name] = true;

        // test goal state
        if(current.name == to){
            cout<< " Shortest Distance From " << from << " to "
            << to <<" = "<< pq.top().dist<< endl ; 
             
            return regenPath(prev, from, to);
        }  

        // exploring other paths (ciites)

        for(Edge& edge : graph.getEdges(current.name)){
            string neighbour = edge.getTo();
            float newDist = current.dist + edge.getWeight();

            // if shortest path is found

            if(!dist.count(neighbour) || newDist < dist[neighbour]){
                dist[neighbour] = newDist;
                pq.push(Node(neighbour, newDist));
                prev[neighbour] = current.name;
            }
        }
      
    }
    
        
    return {}; // incase a path is not found
    
}



vector<string> Agent::regenPath(unordered_map <string, string> & prev, string from , string to){
    vector<string> path ; 
    for(string curr = to ; curr!= from ; curr = prev[curr]){
        path.push_back(curr);
    }
    path.push_back(from);

    reverse(path.begin(), path.end());
    return path;
}





