#include "Edge.h"

Edge::Edge() :cost(INF) {}

std::ostream& operator<<(std::ostream& out, Edge& e)
{
	out << "(" << std::right << e.from << " , " << std::right << e.to << ") -> " << std::right << e.cost;
	return out;
}