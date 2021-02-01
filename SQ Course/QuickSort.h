#pragma once
#include <vector>

class QuickSort
{
private:
	void Swap(int* a, int* b);
	int Partition(std::vector<int>& v, int low, int high);
public:
	void Sort(std::vector<int>& v, int low, int high);
};

