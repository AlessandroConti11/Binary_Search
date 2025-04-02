#include "boundless_binary_search.h"


/**
 * Boundless binary search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index of the target value, -1 if it is not present.
 */
int Boundless_Binary_Search::boundless_binary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return  -1;
    }

    int bottom = 0;
    int middle = array_size;

    while (middle > 1) {
        if (key >= array[bottom + (middle / 2)]) {
            bottom += (middle / 2);
            middle ++;
        }
        middle /= 2;
    }

    if (key == array[bottom]) {
        return bottom;
    }
    else {
        return -1;
    }
}
