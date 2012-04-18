#!/usr/bin/env python
# -*- coding: utf-8 -*-

def sort(array):
	for index in range(1, len(array)):
		insert(array, index, array[index])

def insert(array, pos, value):
	index = pos - 1
	while index >= 0 and array[index] > value:
		array[index + 1] = array[index]
		index = index - 1
	array[index + 1] = value
	print 'Sorting', array

if __name__ == '__main__':
	array = [3, 7, 2, 5, 1, 4]
	print 'Source:', array

	sort(array)
	print 'Result:', array
	
#[Reference] http://ko.wikipedia.org/wiki/%EC%82%BD%EC%9E%85_%EC%A0%95%EB%A0%AC