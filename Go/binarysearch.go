package main

import "fmt"

func search(array []int, value int) int {
	return binarysearch(array, 0, len(array) - 1, value)
}

func binarysearch(array []int, low, high, value int) int {
	if low <= high {
		mid := (low + high) / 2

		if array[mid] == value {
			return mid
		} else if array[mid] > value {
			return binarysearch(array, low, mid - 1, value)	
		} else if array[mid] < value {
			return binarysearch(array, mid + 1, high, value)
		}
	}

	return -1
}

func main() {
	array := []int{0, 10, 20, 30, 40, 50, 60, 70, 80, 90}
	fmt.Println(search(array, 90))
}
