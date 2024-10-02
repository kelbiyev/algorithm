#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>

int main (){
	std::vector<int> data {1 ,6 , 7 , 9 , 10 , 18 };
	if(std::binary_search(data.begin() , data.end() , 5)){
		std::cout<<"Found\n";
	}else{
		std::cout<<"Not Found\n";
	}

	return 0;
}
