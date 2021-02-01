#include "QuickSort.h"

void QuickSort::Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int QuickSort::Partition(std::vector<int>& v, int low, int high)
{
	int pivot = v[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (v[j] <= pivot) {
			i++;
			Swap(&v[i], &v[j]);
		}
	}
	Swap(&v[i + 1], &v[high]);

	return (i + 1);
}

void QuickSort::Sort(std::vector<int>& v, int low, int high)
{
	if (low < high) {
		int pi = Partition(v, low, high);

		Sort(v, low, pi - 1);
		Sort(v, pi + 1, high);
	}
}