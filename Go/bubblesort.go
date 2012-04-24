package main

import "fmt"

func bubblesort(array []int) {
	for i := 0; i < len(array) - 1; i++ {
		for j := 1; j < len(array) - i; j++ {
			if array[j - 1] > array[j] {
				array[j - 1], array[j] = array[j], array[j - 1]
			}
		}
	}
}

func sort(array []int) {
	bubblesort(array)
}

func main() {
	array := []int{2, 0, 7, 3, 4, 6, 5, 8, 1, 9}
	fmt.Println("Source:", array);

	sort(array)
	fmt.Println("Result:", array);
}