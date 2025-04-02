#include "monobound_quaternary_search.h"


int Monobound_Quaternary_Search::monobound_quaternary_search(const vector<int> &array, const int key) {
    const int array_size = static_cast<int>(array.size());

    if (array_size == 0) {
        return -1;
    }

    int bottom = 0;
    int top = array_size;
    int middle = 0;

    while (top > pow(2, 16)) {
        middle = (top / 4);
    }
}