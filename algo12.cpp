#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <deque>
#include <list>


int main (){
	
	std::vector <int> in1 {1,3,5,5,7};	
	std::deque<int> in2 {1,1,2,3};
	std::deque<int> out;
	std::merge(in1.begin() , in1.end(),
		in2.begin() , in2.end(),
		std::back_inserter(out)
		);
	for(int el:out)
		std::cout<<el<<" ";
	
	std::cout<<"\n";
	out.clear();
	
	
	
	std::set_union(in1.begin() , in1.end(),
		in2.begin() , in2.end(),
		std::back_inserter(out)
		);
	for(int el:out)
		std::cout<<el<<" ";
	
	std::cout<<"\n";
	out.clear();
	
	
	std::set_intersection(in1.begin() , in1.end(),
		in2.begin() , in2.end(),
		std::back_inserter(out)
		);
	for(int el:out)
		std::cout<<el<<" ";
	
	std::cout<<"\n";
	out.clear();


	std::set_difference(in1.begin() , in1.end(),
		in2.begin() , in2.end(),
		std::back_inserter(out)
		);
	for(int el:out)
		std::cout<<el<<" ";
	
	std::cout<<"\n";
	out.clear();
	
	
	
	std::set_symmetric_difference(in1.begin() , in1.end(),
		in2.begin() , in2.end(),
		std::back_inserter(out)
		);
	for(int el:out)
		std::cout<<el<<" ";
	
	std::cout<<"\n";
	out.clear();


	return 0;
}
