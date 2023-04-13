fun binarySearch(array: List<Int>, target: Int): Int {
    var small = 0
    var large = array.size - 1

    while (small <= large) {
        val middle = (small + large) / 2
        if (target == array[middle]) {
            return middle
        } else if (target < array[middle]) {
            large = middle - 1
        } else {
            small = middle + 1
        }
    }
    return -1
}
