// skan_min_max.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "foo_min_max.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream in;
	in.open("input.txt");
	if (in.is_open()==0)
		std::cout << "file not found" << std::endl, exit(1);
	int count;
	in >> count;
	int* arr = new int[count];
	for (int i = 0; i < count; ++i)
		in >> arr[i];
	std::pair<int, int> MinMax = ScanMinMax(count, arr);
	std::cout << "min " << MinMax.first << std::endl << "max " << MinMax.second << std::endl;
	in.close();
		
	return 0;
}

