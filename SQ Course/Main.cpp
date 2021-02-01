#include "MyForm.h"

#include <iostream>
using namespace SQCourse;
[STAThreadAttribute]

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main() {
	int arr[] = { -3, 1, 2, 3, 10, 30 };
	// int x = -3;

	// сделать меню
	int x = 0;
	std::cout << "Enter number to find \n";
	std::cin >> x;

	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? std::cout << "Element is not present in array"
		: std::cout << "Element is present at index " << result;
	std::cout << std::endl;
	system("pause");
	return 0;
}