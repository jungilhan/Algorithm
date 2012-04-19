#include <stdio.h>

void insert(int* array, int pos, int value)
{
	int index = pos - 1;
	while (index >=0 && array[index] > value) {
		array[index + 1] = array[index];
		index--;
	}

	array[index + 1] = value;
}

void sort(int* array, int length)
{
	int index = 1;
	for (index; index < length; index++)
		insert(array, index, array[index]);
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
