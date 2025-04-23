package main

import (
	"fmt"
)

func quickSort(array []int, start, end int) {
	if end <= start {
		return
	}
	pivot := partition(array, start, end)
	quickSort(array, start, pivot-1)
	quickSort(array, pivot+1, end)
}

func partition(array []int, start, end int) int {
	pivot := array[end]
	i := start - 1

	for j := start; j <= end-1; j++ {
		if array[j] < pivot {
			i++
			array[j], array[i] = array[i], array[j]

		}
	}
	i++
	array[i], array[end] = array[end], array[i]
	return i
}

func main() {
	arr := []int{2, 5, 1, 2, 0}
	quickSort(arr, 0, len(arr)-1)
	fmt.Println(arr)
}
