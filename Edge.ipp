	inline size_t Edge::get_from()
	{
		return from;
	}
	inline size_t Edge::get_to()
	{
		return to;
	}
	inline void set_nodes(size_t label_from, size_t label_to)
	{
		from = label_from;
		to = label_to;
	}
	inline double get_cost()
	{
		return cost;
	}
	inline void set_cost(double new_cost)
	{
		cost = new_cost;
	}