#include <cstdio>

void printArray(const int size, int* const array)
{
	printf("\tcontents of an array: ");
	for (int index{ 0 }; index != size; ++index)
		printf("[%i]:%i ", index, array[index]);
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

int main()
{
	const int size{ 10 };
	int array0[size]{ 0, 9, 1, 8, 2, 7, 3, 6, 4, 5 };
	printf("Bubble sorting example result -> ");
	bubbleSort(size, array0);
	printArray(size, array0);
	printf("\n");
	int array1[size]{ 0, 9, 1, 8, 2, 7, 3, 6, 4, 5 };
	printf("Selection sorting example result -> ");
	selectionSort(size, array1);
	printArray(size, array1);
	return 0;
}