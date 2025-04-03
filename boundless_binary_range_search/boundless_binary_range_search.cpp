#include "boundless_binary_range_search.h"


/**
 * Boundless binary range search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index range that contains the target value, (-1, -1) if it is not present.
 */
tuple<int, int> Boundless_Binary_Range_Search::boundless_binary_range_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return make_tuple(-1, -1);
    }

    int bottom = 0;
    int middle = array_size;

    while (middle > 1) {
        if (key >= array[bottom + middle / 2]) {
            bottom += middle / 2;
            middle++;
        }

        middle /= 2;
    }

    int right_index = 0;

    if (key == array[bottom]) {
        right_index = bottom;
    }
    else {
        return make_tuple(-1, -1);
    }

    int top = array_size - 1;
    middle = array_size;

    while (middle > 1) {
        if (key <= array[top - middle / 2]) {
            top -= middle / 2;
            middle++;
        }

        middle /= 2;
    }

    int left_index = right_index;

    if (key == array[top]) {
        left_index = top;
    }
    return make_tuple(left_index, right_index);
}
