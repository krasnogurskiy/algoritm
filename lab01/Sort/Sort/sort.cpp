#include <iostream>
#include <ctime>
#include "sort.h"


void PrintArrays(int* arr, int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << "\n\n";
}

void BublleSort(int* arr, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (arr[j] < arr[j - 1]) {
				std::swap(arr[j], arr[j - 1]);
			}
		}
	}
}
void QuickSort(int* arr, int FirstIndex, int LastIndex) {
	int MiddleValue = arr[(FirstIndex + LastIndex) / 2];
	int i = FirstIndex;
	int j = LastIndex;
	do {
		while (arr[j] > MiddleValue) {
			--j;
		}
		while (arr[i] < MiddleValue) {
			++i;
		}
		if (i <= j) {
			std::swap(arr[i], arr[j]);
			++i;
			--j;
		}
	} while (i <= j);
	if (j > FirstIndex) {
		QuickSort(arr, FirstIndex, j);
	}
	if (i < LastIndex) {
		QuickSort(arr, i, LastIndex);
	}
}
void ShellSort(int* arr, int n) {
	int Group, i, j, count;
	Group = n;
	Group = Group / 2;
	while (Group > 0) {
		for (i = 0; i < n - Group; ++i) {
			j = i;
			while (j >= 0 && arr[j] > arr[j + Group]) {
				count = arr[j];
				arr[j] = arr[j + Group];
				arr[j + Group] = count;
				--j;
			}
		}
		Group = Group / 2;
	}
}