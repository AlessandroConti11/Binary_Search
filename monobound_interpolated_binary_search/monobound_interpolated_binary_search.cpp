#include "monobound_interpolated_binary_search.h"


/**
 * Monobound interpolated binary search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index of the target value, -1 if it is not present.
 */
int Monobound_Interpolated_Binary_Search::monobound_interpolated_binary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0 || key < array[0]) {
        return -1;
    }

    int bottom = array_size - 1;

    if (key >= array[bottom]) {
        return array[bottom] == key ? bottom : -1;
    }

    int top = 64;

    if (key >= array[bottom]) {
        while (true) {
            if (bottom + top >= array_size) {
                top = array_size - bottom;
            }

            bottom += top;

            if (key < array[bottom]) {
                bottom -= top;
                break;
            }

            top *= 2;
        }
    }
    else {
        while (true) {
            if (bottom < top) {
                top = bottom;
                bottom = 0;
                break;
            }

            bottom -= top;

            if (key >= array[bottom]) {
                break;
            }

            top *= 2;
        }
    }

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
