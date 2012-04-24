#include <stdio.h>

int bubblesort(int* array, int length)
{
	int i, j, tmp;

	for (i = 0; i < length - 1; i++) {
		for (j = 1; j < length - i; j++) {
			if (array[j - 1] > array[j]) {
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
		}
	}
}

int sort(int* array, int length)
{
	bubblesort(array, length);
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