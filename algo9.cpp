#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

int main() {
	/*
	std::list<int> data {3 , 14 ,15 ,92 ,6};
	//std::sort(data.begin() , data.end());
	data.sort();
	for ( int elem : data)
		std::cout<<elem<<"\n";
	*/
	
	std::vector<int> data {3 , 14 ,15 ,92 ,6};
	std::partial_sort(data.begin() , data.begin() +3 , data.end());
	
	for ( int elem : data)
		std::cout<<elem<<"\n";
	return 0;
}
