package main

import "fmt"

func insert_sort(data []int) {

	for i := 0; i < len(data)-1; i++ {
		ele := i + 1

		for j := i; j >= 0; j-- {

			if data[ele] < data[j] {
				data[ele], data[j] = data[j], data[ele]
				ele = j
			}
		}
	}
}

func main() {
	data := []int{1, 2, 6, 1, 2, 4, 7, 5}
	fmt.Println("before: ", data)
	insert_sort(data)
	fmt.Println("after: ", data)
}
