#pragma once
#include <vector>

class BinarySearch
{
private:
	int FindFirstOccurence(std::vector<int> v, int n);
	int FindLastOccurence(std::vector<int> v, int n);
public:
	std::vector<int> FindIndexes(std::vector<int> v, int n);
};

