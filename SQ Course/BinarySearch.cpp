#include "BinarySearch.h"

int BinarySearch::FindFirstOccurence(std::vector<int> v, int n)
{
	int beg = 0;
	int end = v.size() - 1;

	while (beg <= end) {

		int mid = beg + (end - beg) / 2;

		if (v[mid] == n) {
			if (mid - 1 >= 0 && v[mid - 1] == n) {
				end = mid - 1;
				continue;
			}
			return mid;
		}

		else if (v[mid] < n)
			beg = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}

int BinarySearch::FindLastOccurence(std::vector<int> v, int n)
{
	int beg = 0;
	int end = v.size() - 1;

	while (beg <= end) {

		int mid = beg + (end - beg) / 2;

		if (v[mid] == n) {
			if (mid + 1 < v.size() && v[mid + 1] == n) {
				beg = mid + 1;
				continue;
			}
			return mid;
		}

		else if (v[mid] < n)
			beg = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}

std::vector<int> BinarySearch::FindIndexes(std::vector<int> v, int n)
{
	int firstIndex = FindFirstOccurence(v, n);
	int lastIndex = FindLastOccurence(v, n);

	if (firstIndex == -1 || lastIndex == -1)
		return {};

	std::vector<int> res = {};

	for (int i = firstIndex; i <= lastIndex; i++) {
		res.push_back(i);
	}

	return res;
}