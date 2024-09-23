#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Node
{
public:
    string name;
    float dist;

    Node(string name, float dist);
    float getDist();
};


#endif