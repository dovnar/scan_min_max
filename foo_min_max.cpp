#include "foo_min_max.h"
#include "stdafx.h"

std::pair<int, int> ScanMinMax(int const count, int* in)
{
	int max = INT_MIN;
	int min = INT_MAX;
	
	for (size_t i = 0; i < count; ++i)
	{
		if (in[i] > max)
			max = in[i];
		if (in[i] < min)
			min = in[i];
	}
	return std::make_pair(min, max);
}