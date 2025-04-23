package main

import "fmt"

func select_sort(data []int) {
	var e int = 0

	for i := 0; i < len(data)-1; i++ {
		e = i
		for j := e + 1; j < len(data); j++ {
			if data[j] < data[e] {
				e = j
			}
		}
		if e != i {

			data[i], data[e] = data[e], data[i]
		}
	}
}

func main() {

	data := []int{1, 2, 7, 2, 4, 7, 2, 9}

	fmt.Println("before: ", data)
	select_sort(data)
	fmt.Println("after: ", data)

}
