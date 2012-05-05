#include <stdio.h>

int binarysearch(int* array, int low, int high, int value)
{
	if (low > high)
		return -1;

	int mid = (low + high) / 2;
	if (array[mid] == value)
		return mid;
	else if (array[mid] < value)
		return binarysearch(array, mid + 1, high, value);
	else if (array[mid] > value)
		return binarysearch(array, low, mid - 1, value);
}

int search(int* array, int length, int value)
{
	return binarysearch(array, 0, length - 1, value);
}

int main(int argc, char* argv[])
{
	int array[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
	int length = sizeof(array) / sizeof(int);

	printf("%d\n", search(array, length, 90));

	return 0;
}