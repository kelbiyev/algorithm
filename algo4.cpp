#include <algorithm>
#include <iostream>
#include <string>

int main (){
	std::string s = "IPhone SE";
	std::cout<<std::count_if(s.begin(),	s.end() , [](char c) {
						return 'A' <= c && c <= 'Z';
						}
					)<<"\n";
	
	return 0;
}

