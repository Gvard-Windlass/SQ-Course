#pragma once
#include <vector>

class RndGenerator
{
private:
	int size;
	std::vector<int> GenerateIntVector(int from, int to);
public:
	RndGenerator(int size);
	std::vector<int> GetRandomIntVector(int from, int to);
};

