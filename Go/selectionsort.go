package main

import "fmt"

func insertionsort(array []int) {
	for i := 0; i < len(array) - 1; i++ {
		smallest := i

		for j := i + 1; j < len(array); j++ {
			if array[j] < array[smallest] {
				smallest = j
			}
		}

		array[i], array[smallest] = array[smallest], array[i]
	}
}

func main() {
	array := []int{2, 0, 7, 3, 4, 6, 5, 8, 1, 9}
	fmt.Println("Source:", array)

	insertionsort(array)
	fmt.Println("Result:", array)
}