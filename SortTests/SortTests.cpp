#include "pch.h"
#include "CppUnitTest.h"
#include "../SQ Course/QuickSort.h"
#include "../SQ Course/QuickSort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SortTests
{
	TEST_CLASS(SortTests)
	{
	public:

		TEST_METHOD(Sort)
		{
			QuickSort s;

			std::vector<int> v = { -1, 2, 0, 45, -100, 10 };
			std::vector<int> vSorted = { -100, -1, 0, 2, 10, 45 };
			s.Sort(v, 0, v.size() - 1);

			Assert::IsTrue(v == vSorted);
		}
	};
}
