﻿#include "sorting.h"

int main()
{
	const int size{ 10 };

	int array0[size]{ 0, 9, 1, 8, 5, 5, 3, 6, 4, 5 };
	printf("Bubble sorting example result\n");
	BubbleSort(size, array0);
	PrintArray(size, array0);
	printf("\n");

	int array1[size]{ 0, 9, 1, 8, 5, 5, 3, 6, 4, 5 };
	printf("Selection sorting example result\n");
	SelectionSort(size, array1);
	PrintArray(size, array1);
	printf("\n");

	int array2[size]{ 0, 9, 1, 8, 5, 5, 3, 6, 4, 5 };
	printf("Insertion sorting example result\n");
	InsertionSort(size, array2);
	PrintArray(size, array2);
	printf("\n");

	int begin{ 0 }, end{ size - 1 };

	int array3[size]{ 0, 9, 1, 8, 2, 7, 3, 6, 4, 5 };
	printf("Hoare's sorting example result\n");
	FastSort(array3, begin, end);
	PrintArray(size, array3);
	printf("\n");

	int array4[size]{ 0, 9, 1, 8, 2, 7, 3, 6, 4, 5 };
	printf("Lomuto's sorting example result\n");
	SimpleFastSort(array4, begin, end);
	PrintArray(size, array4);
	printf("\n");

	return 0;
}