#include "sorting.h"

void printArray(const int size, int* const array)
{
	printf("Contents of an array:\n");
	for (int index{ 0 }; index != size; ++index)
		printf("[%i]:%i\n", index, array[index]);
}

void bubbleSort(const int size, int* array)
{
	int lenght{ size };
	while (lenght != 0)
	{
		for (int index{ 1 }; index != lenght; ++index)
		{
			int temp{ 0 };
			if (array[index - 1] > array[index]) {
				temp = array[index - 1];
				array[index - 1] = array[index];
				array[index] = temp;
			}
		}
		--lenght;
	}
}

void selectionSort(const int size, int* array)
{
	for (int index{ 0 }; index != size - 1; ++index)
	{
		int minimal_index{ index };
		for (int cycle{ minimal_index + 1 }; cycle != size; ++cycle)
		{
			if (array[minimal_index] > array[cycle])
				minimal_index = cycle;
		}
		if (minimal_index != index)
		{
			int temp{ array[minimal_index] };
			array[minimal_index] = array[index];
			array[index] = temp;
		}
	}
}

void insertionSort(const int size, int* array)
{
	for (int index{ 1 }; index < size; ++index)
	{
		int sorted{ index - 1 };
		while (sorted > -1 && array[sorted] > array[sorted + 1])
		{
			int buffer{};
			buffer = array[sorted];
			array[sorted] = array[sorted + 1];
			array[sorted + 1] = buffer;
			--sorted;
		}
	}
}
