#include <iostream>
#include <algorithm>
#include <vector>

int main (){
	std::vector<int> data {100, 42, 17, 80, 20, 80};
	std::cout<<std::count(data.begin() , data.end() , 80) <<"\n";
	
	
	/*
	int counter = 0;
	for (int elem : data){
		if (elem == 80){
			++counter;
		}
	}
	std::cout<<counter<<"\n";
	*/
	
	return 0;
}
