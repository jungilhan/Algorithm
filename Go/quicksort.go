package main

import "fmt"

func sort(array []int) {
	quicksort(array, 0, len(array) - 1)
}

func quicksort(array []int, left, right int) {
	if left < right {
		pivotIndex := partition(array, left, right)
		quicksort(array, left, pivotIndex - 1)
		quicksort(array, pivotIndex + 1, right)
	}
}

func partition(array []int, left int, right int) int {
	pivotIndex := left
	j := left

	for i:= left + 1; i <= right; i++ {
		if array[i] < array[pivotIndex] {
			j += 1
			array[i], array[j] = array[j], array[i]
		}
	}

	array[pivotIndex], array[j] = array[j], array[pivotIndex]
	pivotIndex = j
	return pivotIndex
}

func main() {
	array := []int{5, 3, 7, 6, 2, 1, 4};
	fmt.Println("Source:", array)

	sort(array)
	fmt.Println("Result:", array)
}