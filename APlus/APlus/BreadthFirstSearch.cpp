#include <unordered_map>
#include <vector>
#include "implementation.cpp"

struct SimpleGraph
{
	std::unordered_map<char, std::vector<char>> edges;
	std::vector<char> neighbors(char id) {
		return edges[id];
	}
};

SimpleGraph example_graph{ {
	{'A',{'B'}},
	{'B',{'C'}},
	{'C',{'B', 'D', 'F'}},
	{'D',{'C','E'}},
	{'E',{'F'}},
	{'F',{}}
} };

void breadth_first_search(SimpleGraph graph, char start) {

}