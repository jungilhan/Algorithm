#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sort(array):
	quicksort(array, 0, len(array) - 1)

def quicksort(array, left, right):
	if left < right:
		pivotIndex = partition(array, left, right)
		quicksort(array, left, pivotIndex - 1)
		quicksort(array, pivotIndex + 1, right)

def partition(array, left, right):
	pivotIndex = left;
	j = left

	for i in range(left + 1, right + 1):
		if array[i] < array[pivotIndex]:
			j = j + 1
			array[i], array[j] = array[j], array[i]

	array[pivotIndex], array[j] = array[j], array[pivotIndex]
	pivotIndex = j
	return pivotIndex

if __name__ == '__main__':
	array = [5, 3, 7, 6, 2, 1, 4]
	print 'Source:', array

	sort(array)
	print 'Result:', array
