#include <iostream>
#include <algorithm>
#include <vector>

int main (){
	std::vector<int> data{100, 42, 17, 80, 20, 0};
	std::sort(data.begin() + 1 , data.end() - 1);
	for (long unsigned int x = 0; x < data.size(); ++x){
		std::cout<< data[x] <<" ";
	}
	std::cout<<"\n";

	return 0;
}
