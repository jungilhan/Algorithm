#!/usr/bin/env python
# -*- coding: utf-8 -*-

def selectionsort(array):
	for i in range(len(array) - 1):
		smallest = i

		for j in range(i + 1, len(array)):
			if array[j] < array[smallest]:
				smallest = j

		array[i], array[smallest] = array[smallest], array[i]

if __name__ == '__main__':
	array = [2, 0, 7, 3, 4, 6, 5, 8, 1, 9]
	print 'Source:', array

	selectionsort(array)
	print 'Result:', array
