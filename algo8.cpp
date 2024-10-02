#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>

int main (){
	std::vector<int> v {3 ,14 ,15 ,92 ,6};
	std::list<int> 	l;
	std::copy(v.begin() , v.end(), std::back_inserter(l));
	

	return 0;
}
