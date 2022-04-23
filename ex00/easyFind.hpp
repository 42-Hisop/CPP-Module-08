#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
typename T::iterator easyFind(T &container, int x)
{
	return std::find(container.begin(), container.end(), x);
}

#endif
