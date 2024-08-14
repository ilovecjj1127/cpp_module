#pragma once

#include "easyfind.hpp"

template <typename T> int	easyfind(T &t, int num)
{
	for (int i = 0; t[i]; i++)
	{
		if (t[i] == num)
			return i;
	}
}