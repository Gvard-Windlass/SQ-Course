#include "RndGenerator.h"
#include <random>

using namespace std;

vector<int> RndGenerator::GenerateIntVector(int from, int to)
{
    vector<int> vec(size);
    // First create an instance of an engine.
    random_device rnd_device;
    // Specify the engine and distribution.
    mt19937 mersenne_engine{ rnd_device() };  // Generates random integers
    uniform_int_distribution<int> dist{ from, to };

    auto gen = [&dist, &mersenne_engine]() {
        return dist(mersenne_engine);
    };

    generate(begin(vec), end(vec), gen);

    return vec;
}

RndGenerator::RndGenerator(int size)
{
    this->size = size;
}

std::vector<int> RndGenerator::GetRandomIntVector(int from, int to)
{
    return GenerateIntVector(from, to);
}
