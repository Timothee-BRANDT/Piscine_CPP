#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

template<typename T>
int	easyfind(T param, int nb) { 

	std::vector<int>::iterator it;

	it = find(param.begin(), param.end(), nb);

	if (it != param.end())
		return (1);

	return (-1);
}
