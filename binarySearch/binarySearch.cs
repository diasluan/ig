using System;

public class Program {
	public static int BinarySearch(int[] array, int target) {
        int small = 0;
        int large = array.Length -1;
        
        while(small <= large) {
            int middle = (small + large) /2;
            if (target == array[middle]) {
                return middle;
            } else if (target < array[middle]) {
                large = middle - 1;
            } else {
                small = middle + 1;
            }
        }
            
		return -1;
	}
}
