#include <algorithm>
#include <iostream>
#include <utility>
#include <map>
int main (){
	std::map<int , int> m {
		{1 , 30}, 
		{2, 28},
		{3, 31}
	};
	auto it1 = m.find(12);//find by keys
	//auto it2 = std::find(m.begin(), m.end(), 12); MISTAKE 
	std::pair <const int, int> value {12,31};
	auto it3 = std::find(m.begin(), m.end(), value);
	
 
	return 0;
}
