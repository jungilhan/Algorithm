#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sort(array):
	gaps = [8929, 3905, 2161, 929, 505, 209, 109, 41, 19, 5, 1] # [Refs] http://oeis.org/A033622
	shellsort(array, gaps)

def shellsort(array, gaps):
	for h in gaps:
		for i in range(h, len(array)):
			insert(array, i, array[i], h)

def insert(array, pos, value, h):
	index = pos - h
	while index >= 0 and array[index] > value:
		array[index + h] = array[index]
		index -= h
	array[index + h] = value

if __name__ == '__main__':
	array = [2, 0, 7, 3, 4, 6, 5, 8, 1, 9]
	print 'Source:', array

	sort(array)
	print 'Result:', array	