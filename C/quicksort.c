#include <stdio.h>

int partition(int* array, int left, int right)
{
	int pivotIndex = left;
	int i, j = left;

	for (i = left + 1; i <= right; i++) {
		if (array[i] < array[pivotIndex]) {
			j++;
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	int tmp = array[j];
	array[j] = array[pivotIndex];
	array[pivotIndex] = tmp;

	pivotIndex = j;
	return pivotIndex;
}

void quicksort(int* array, int left, int right)
{
	if (left < right) {
		int pivotIndex = partition(array, left, right);
		quicksort(array, left, pivotIndex - 1);
		quicksort(array, pivotIndex + 1, right);
	}
}

void sort(int* array, int length)
{
	quicksort(array, 0, length - 1);
}

int main(int argc, char* argv[]) 
{
	int array[] = {5, 3, 7, 6, 2, 1, 4};
	int length =sizeof(array) / sizeof(int); 
	sort(array, length);

#if 0
	int i = 0;
	for (i; i < length; i++)
		printf("%d ", array[i]);
	puts("");
#endif

	return 0;
}