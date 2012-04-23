#include <stdio.h>

void insert(int* array, int pos, int value, int gap)
{
	int index = pos - gap;

	while (index >= 0 && array[index] > value) {
		array[index + gap] = array[index];
		index -= gap;
	}

	array[index + gap] = value;
}

void shellsort(int* array, int length)
{
	int gaps[] = {8929, 3905, 2161, 929, 505, 209, 109, 41, 19, 5, 1}; // [Refs] http://oeis.org/A033622
	int i, j;

	for (i = 0; i < sizeof(gaps) / sizeof(int); i++) {
		int gap = gaps[i];

		for (j = gap; j < length; j++)
			insert(array, j, array[j], gap);
	}
}

void sort(int* array, int length)
{
	shellsort(array, length);	
}

int main(int argc, char* argv[]) 
{
	int array[] = {2, 0, 7, 3, 4, 6, 5, 8, 1, 9};
	int length = sizeof(array) / sizeof(int);
	sort(array, length);

#if 0
	int i = 0;
	for (i; i < length; i++)
		printf("%d ", array[i]);
	puts("");
#endif
	return 0;
}