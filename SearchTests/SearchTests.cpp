#include "pch.h"
#include "CppUnitTest.h"
#include "../SQ Course/BinarySearch.h"
#include "../SQ Course/BinarySearch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SearchTests
{
	TEST_CLASS(SearchTests)
	{
	public:

		TEST_METHOD(SearchAtStart)
		{
			BinarySearch s;

			std::vector<int> v = { 1, 2, 3, 4, 5 };
			int n = 0;
			std::vector<int> actual = s.FindIndexes(v, 1);
			Assert::AreEqual(n, actual[0]);
		}

		TEST_METHOD(SearchAtEnd)
		{
			BinarySearch s;

			std::vector<int> v = { 1, 2, 3, 4, 5 };
			int n = 4;
			std::vector<int> actual = s.FindIndexes(v, 5);
			Assert::AreEqual(n, actual[0]);
		}

		TEST_METHOD(SearchAtMiddle)
		{
			BinarySearch s;

			std::vector<int> v = { 1, 2, 3, 4, 5 };
			int n = 2;
			std::vector<int> actual = s.FindIndexes(v, 3);
			Assert::AreEqual(n, actual[0]);
		}

		TEST_METHOD(SearchNonExistant)
		{
			BinarySearch s;

			std::vector<int> v = { 1, 2, 3, 4, 5 };
			std::vector<int> actual = s.FindIndexes(v, 6);
			Assert::IsFalse(actual.size());
		}

		TEST_METHOD(SearchWithDuplicates)
		{
			BinarySearch s;

			std::vector<int> v = { 1, 1, 1, 2, 3, 4, 5 };
			std::vector<int> actual = s.FindIndexes(v, 1);
			Assert::IsTrue(actual.size() == 3);
			Assert::IsTrue(actual[0] == 0 && actual[actual.size() - 1] == 2);
		}
	};
}
