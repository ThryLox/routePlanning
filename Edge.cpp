#include "Edge.h"

using namespace std;

Edge :: Edge(string to , float weight ): to(to), weight(weight){};
string Edge :: getTo() {return to;}
float Edge :: getWeight() {return weight;}