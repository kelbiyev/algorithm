#include <algorithm>
#include <iostream>
#include <vector>
int main (){
	std::vector<int> v{5 , 5 , 3 , 2, 2, 5, 9, 1};
	auto iter = std::unique(v.begin() , v.end());
	for(long unsigned int i = 0 ; i< v.size() ; ++i){
		std::cout<< v[i] <<"\n";
	}
	v.erase(iter  , v.end());
	for(long unsigned int i = 0 ; i< v.size() ; ++i){
		std::cout<< v[i] <<"\n";
	}
	
	
	return 0;
}
