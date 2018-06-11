#pragma once
#include <iostream>

const double INF = DBL_MAX;

class Edge
{
public:
	Edge();
	size_t Edge::get_from();
	size_t Edge::get_to();
	void set_nodes(size_t label_from, size_t label_to);
	double get_cost();
	void set_cost(double new_cost);
	//overloading the << operator to nicely print Edges: (from,to)->cost
	friend std::ostream& operator<<(std::ostream& out, Edge& e);
private:
	size_t from;
	size_t to;
	double cost;
};

#include "Edge.ipp"