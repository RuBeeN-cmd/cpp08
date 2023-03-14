#include "easyfind.hpp"

int main()
{
	std::vector<int> array;
	std::list<int> array2;

	array.push_back(0);
	array2.push_back(0);
	
	try {
		std::cout << easy_find(array, 1) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << easy_find(array2, 0) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
