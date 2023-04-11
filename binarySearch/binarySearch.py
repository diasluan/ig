def binarySearch(array, target):
    small = 0
    large = len(array)-1

    while small <= large:
        mid = (small + large)//2
        if array[mid] == target:
            return mid
        elif array[mid] > target:
            large = mid - 1
        elif array[mid] < target:
            small = mid + 1
    return -1

