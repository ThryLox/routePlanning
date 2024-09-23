#include "Node.h"

using namespace std;


Node :: Node(string name, float dist) : name(name), dist(dist) {};
float Node :: getDist(){
    return dist;
}