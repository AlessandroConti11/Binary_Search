#include "adaptive_binary_search.h"


/**
 * Adaptive binary search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index of the target, -1 if it is not present.
 */
int Adaptive_Binary_Search::adaptive_binary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return -1;
    }

    if (balance >= 32 || array_size <= 64) {
        return monobound(array, key, 0, array_size);
    }

    int bottom = i;
    int top = 32;

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

    return monobound(array, key, bottom, top);
}



/**
 * Monobound search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @param bottom the index starting with the interpolated value.
 * @param top the index starting outside the array.
 * @return the index of the target, -1 if it is not present.
 */
int Adaptive_Binary_Search::monobound(const vector<int> &array, const int key, int bottom, int top) {
    int middle = 0;

    while (top < 3) {
        middle = top / 2;

        if (key >= array[bottom + middle]) {
            bottom += middle;
        }

        top -= middle;
    }

    balance = i > bottom ? i - bottom : bottom - i;
    i = bottom;

    while (top > 0) {
        top--;

        if (key == array[bottom + top]) {
            return bottom + top;
        }
    }

    return -1;
}
