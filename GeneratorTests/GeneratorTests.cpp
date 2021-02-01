#include "pch.h"
#include "CppUnitTest.h"
#include "../SQ Course/RndGenerator.h"
#include "../SQ Course/RndGenerator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GeneratorTests
{
	TEST_CLASS(GeneratorTests)
	{
	public:

		TEST_METHOD(TestSize)
		{
			RndGenerator g(100);
			std::vector<int> v = g.GetRandomIntVector(0, 5);
			Assert::IsTrue(v.size() == 100);
		}

		TEST_METHOD(TestBigSize)
		{
			RndGenerator g(1000000);
			std::vector<int> v = g.GetRandomIntVector(-1000000, 1000000);
			Assert::IsTrue(v.size() == 1000000);
		}

		TEST_METHOD(TestMin)
		{
			RndGenerator g(100);
			std::vector<int> v = g.GetRandomIntVector(0, 100);
			int min = *min_element(std::begin(v), std::end(v));
			Assert::IsTrue(min >= 0);
		}

		TEST_METHOD(TestMax)
		{
			RndGenerator g(100);
			std::vector<int> v = g.GetRandomIntVector(0, 100);
			int max = *max_element(std::begin(v), std::end(v));
			Assert::IsTrue(max <= 100);
		}
	};
}
