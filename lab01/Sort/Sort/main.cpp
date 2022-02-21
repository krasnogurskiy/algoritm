#include <iostream>
#include "sort.h"

int main() {
	const int Size = 10;
	int Arr[Size] = { 2, 8, 5, 1, 20, 6, 4, 15, 9, 7 };
	PrintArrays(Arr, Size);

	//BublleSort(Arr, Size);
	//QuickSort(Arr, 0, Size - 1);
	//ShellSort(Arr, Size);
	RadixSort(Arr, Size);
	PrintArrays(Arr, Size);
	//std::cout << GetMax(Arr, Size);
	delete[] Arr;
	return 0;
}
