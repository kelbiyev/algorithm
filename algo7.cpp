#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main (){
	/*
	std::vector<int> v {3, 14, 15, 92, 6};
	std::list<int> l;
	l.resize(v.size());
	std::copy(v.rbegin() , v.rend() , l.begin());
	
	for ( int elem : l)
		std::cout<<elem<<"\n";
		
	*/
	
	std::vector<int> v {3, 14, 15, 92, 6};
	std::list<int> l(10);
	auto iter = std::copy(v.begin() , v.end() , l.begin());
	for ( int elem : l)
		std::cout<<elem<<"\n";
	l.erase(iter , l.end());
	for ( int elem : l)
		std::cout<<elem<<"\n";
	
	return 0;
}
