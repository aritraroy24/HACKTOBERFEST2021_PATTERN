package main

import "fmt"

func main() {
	rows := 9
	space := rows / 2
	num := 1

	for i := 1; i <= rows; i++ {
		for j := 1; j <= space; j++ {
			fmt.Printf(" ")
		}
		count := num/2 + 1

		for k := 1; k <= num; k++ {
			fmt.Printf("%d", count)
			if k <= num/2 {
				count--
			} else {
				count++
			}
		}

		fmt.Println()

		if i <= rows/2 {
			space = space - 1
			num = num + 2
		} else {
			space = space + 1
			num = num - 2
		}
	}
}
