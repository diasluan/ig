#include <vector>
using namespace std;

int binarySearch(vector<int> array, int target)
{
    int small = 0;
    int large = array.size() - 1;
    while (small <= large)
    {
        int middle = (small + large) / 2;
        if (target == array[middle])
        {
            return middle;
        }
        else if (target < array[middle])
        {
            large = middle - 1;
        }
        else
        {
            small = middle + 1;
        }
    }
    return -1;
}