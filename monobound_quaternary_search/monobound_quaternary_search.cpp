#include "monobound_quaternary_search.h"


/**
 * Monobound quaternary search.
 *
 * @warning the array must be sorted.
 *
 * @param array the sorted array.
 * @param key the target value to find in the array.
 * @return the index of the target value, -1 if it is not present.
 */
int Monobound_Quaternary_Search::monobound_quaternary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return -1;
    }

    int bottom = 0;
    int top = array_size;
    int middle = 0;
    const int two_to_sixteen = static_cast<int>(pow(2, 16));

    while (top >= two_to_sixteen) {
        middle = top / 4;
        top -= middle * 3;

        if (key < array[bottom + middle * 2]) {
            if (key >= array[bottom + middle]) {
                bottom += middle;
            }
        }
        else {
            bottom += middle * 2;

            if (key >= array[bottom + middle]) {
                bottom += middle;
            }
        }
    }

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
