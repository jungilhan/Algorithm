package main

import "fmt"

func sort(array []int) {
	gaps := []int{8929, 3905, 2161, 929, 505, 209, 109, 41, 19, 5, 1} // [Refs] http://oeis.org/A033622
	shellsort(array, gaps)
}

func shellsort(array, gaps []int) {
	for i := 0; i < len(gaps); i++ {
		gap := gaps[i]

		for j := gap; j < len(array); j++ {
			insert(array, j, array[j], gap)
		}
	}
}

func insert(array []int, pos, value, gap int) {
	index := pos - gap

	for ; index >= 0 && array[index] > value; index -= gap {
		array[index + gap] = array[index]
	}

	array[index + gap] = value
}

func main() {	
	array := []int{2, 0, 7, 3, 4, 6, 5, 8, 1, 9}
	fmt.Println("Source:", array);

	sort(array)
	fmt.Println("Result:", array);
}