#include "standard_binary_search.h"


/**
 * Standard binary search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index of the target value, -1 if it is not present
 */
int Standard_Binary_Search::standard_binary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return -1;
    }

    int bottom = 0;
    int top = array_size - 1;
    int middle = 0;

    while (bottom < top) {
        middle = top - (top - bottom) / 2;

        if(key < array[middle]) {
            top = middle - 1;
        }
        else {
            bottom = middle;
        }
    }

    if (key == array[top]) {
        return top;
    }
    return -1;
}
