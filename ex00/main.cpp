#include "easyFind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	std::vector<int> intV;
	std::vector<int>::iterator it;
	
	for (int i = 0; i < 10; i++)
		intV.push_back(i * 5);

	it = easyFind(intV, 25);
	if (it != intV.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Not found" << std::endl;

	it = easyFind(intV, 10);
	if (it != intV.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Not found" << std::endl;

	it = easyFind(intV, 7);
	if (it != intV.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Not found" << std::endl;
	
	return (0);
}
