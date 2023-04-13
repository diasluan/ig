export function binarySearch(array: number[], target: number): number {
  let small = 0
  let large = array.length - 1

  while (small <= large) {
    const middle = Math.floor((small + large) / 2)
    if (target === array[middle]) {
      return middle
    } else if (target < array[middle]) {
      large = middle - 1
    } else {
      small = middle + 1
    }
  }
  return -1
}
