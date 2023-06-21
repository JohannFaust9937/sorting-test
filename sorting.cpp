#include "sorting.h"

void PrintArray(const int size, int const array[])
{
	printf("Contents of an array:\n");
	for (int index{ 0 }; index != size; ++index)
		printf("[%i]:\t%i\n", index + 1, array[index]);
}

void BubbleSort(const int size, int array[])
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

void SelectionSort(const int size, int array[])
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

void InsertionSort(const int size, int array[])
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

int subFastSort(int array[], int begin, int end)
{
	int middle_value{ array[(begin + end) / 2] };
	while (begin <= end) {
		while (array[begin] < middle_value)
			++begin;
		while (array[end] > middle_value)
			--end;
		if (begin <= end)
		{
			if (array[begin] != array[end])
			{
				int buffer{ array[begin] };
				array[begin] = array[end];
				array[end] = buffer;
			}
			++begin;
			--end;
		}
	}
	return begin;
}

void FastSort(int array[], int begin, int end)
{
	if (begin < end)
	{
		int middle{ subFastSort(array, begin, end) };
		FastSort(array, begin, middle - 1);
		FastSort(array, middle, end);
	}
}

int subSimpleFastSort(int array[], int begin, int end)
{
	int sorted{ begin };
	for (int current{ begin }; current < end; ++current)
	{
		if (array[current] <= array[end])
		{
			int buffer{ array[sorted] };
			array[sorted] = array[current];
			array[current] = buffer;
			++sorted;
		}
	}
	int buffer{ array[sorted] };
	array[sorted] = array[end];
	array[end] = buffer;
	return sorted;
}


void SimpleFastSort(int array[], int begin, int end)
{
	if (begin < end)
	{
		int current{ subSimpleFastSort(array, begin, end) };
		SimpleFastSort(array, begin, current - 1);
		SimpleFastSort(array, current + 1, end);
	}
}