#pragma once
#include <iostream>
#include <vector>

#include "Edge.h"


/* class PriorityQueue models a priority queue data structure
*  with the minimum cost as the priority
*  so the minimum cost is at the top of the heap
*/
class PriorityQueue
{
public:
	//default constructor
	PriorityQueue(size_t size = 0) :num_elems(size)
	{
		elems.resize(size);
		init_queue();
	}

	//returns the top element of the queue
	inline Edge top()
	{
		return elems.at(0);
	}

	//returns the current number of elements in the priority queue
	inline size_t get_size()
	{
		return num_elems;
	}

	void print_all()
	{
		for (size_t i = 0; i < num_elems; i++)
		{
			std::cout << elems.at(i);
		}
		std::cout << std::endl;
	}

	~PriorityQueue()
	{
		elems.clear();
		//cout << "PriorityQueue destructor is being called" << endl;
	}
private:
	size_t num_elems;
	vector<Edge> elems;
	//initially all the nodes in the path have infinite costs and null predecessors
	inline void init_queue(void)
	{
		for (size_t i = 0; i < num_elems; ++i)
		{
			elems.at(i).set_cost(INF);
			elems.at(i).set_label(i);
			elems.at(i).set_prev(nullptr);
		}
	}
};

