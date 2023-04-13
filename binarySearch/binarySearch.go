package main

func BinarySearch(array []int, target int) int {
    small := 0
    large := len(array) - 1

    for small <= large {
        middle := (small + large) / 2
        if target == array[middle] {
            return middle
        } else if target < array[middle] {
            large = middle - 1
        } else {
            small = middle + 1
        }
    }
	return -1
}
