#include <stdio.h>

void insertionsort(int* array, int length)
{
	int i, j, smallest, tmp;

	for (i = 0; i < length - 1; i++) {
		smallest = i;

		for (j = i + 1; j < length; j++) {
			if (array[j] < array[smallest])
				smallest = j;
		}

		tmp = array[i];
		array[i] = array[smallest];
		array[smallest] = tmp;
	}
}

int main(int argc, char* argv[])
{
	int array[] = {2, 0, 7, 3, 4, 6, 5, 8, 1, 9};
	int length =sizeof(array) / sizeof(int); 
	
	insertionsort(array, length);

#if 0
	int i = 0;
	for (i; i < length; i++)
		printf("%d ", array[i]);
	puts("");
#endif

	return 0;
}