#include "sorting.h"

int main()
{
	const int size{ 10 };

	// Пузырьковая сортировка
	int array0[size]{ 0, 9, 1, 8, 5, 5, 3, 6, 4, 5 };
	printf("Bubble sorting example result\n");
	bubbleSort(size, array0);
	printArray(size, array0);
	printf("\n");

	// Сортировка выбором
	int array1[size]{ 0, 9, 1, 8, 5, 5, 3, 6, 4, 5 };
	printf("Selection sorting example result\n");
	selectionSort(size, array1);
	printArray(size, array1);
	printf("\n");

	// Сортировка вставками
	int array2[size]{ 0, 9, 1, 8, 5, 5, 3, 6, 4, 5 };
	printf("Insertion sorting example result\n");
	insertionSort(size, array2);
	printArray(size, array2);
	printf("\n");

	return 0;
}