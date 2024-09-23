#ifndef EDGE_H
#define EDGE_H

#include <string>
using namespace std;


class Edge
{
private:
    string to;
    float weight;
public:
    Edge(string to , float weight );
    string getTo();
    float getWeight();
};



#endif