#include "tripletapped_binary_search.h"


/**
 * Tripletapped binary search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index of the target value, -1 if it is not present.
 */
int Tripletapped_Binary_Search::tripletapped_binary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return -1;
    }

    int bottom = 0;
    int top = array_size;
    int middle = 0;

    while (top > 3) {
        middle = top / 2;

        if (key >= array[bottom + middle]) {
            bottom += middle;
        }

        top -= middle;
    }

    while (top > 0) {
        top--;

        if (key == array[bottom + top]) {
            return bottom + top;
        }
    }

    return -1;
}
