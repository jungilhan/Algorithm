package main

import "fmt"

func sort(array []int) {
	for index := 1; index < len(array); index++ {
		insert(array, index, array[index])
	}
}

func insert(array []int, pos, value int) {
	index := pos - 1
	for ; index >= 0 && array[index] > value; index--{
		array[index + 1] = array[index]
	}

	array[index + 1] = value
}

func main() {
	array := []int{5, 3, 7, 6, 2, 1, 4};
	fmt.Println("Source:", array)

	sort(array)
	fmt.Println("Result:", array)
}
