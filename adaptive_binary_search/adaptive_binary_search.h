#ifndef BINARY_SEARCH_ADAPTIVE_BINARY_SEARCH_H
#define BINARY_SEARCH_ADAPTIVE_BINARY_SEARCH_H


#include <vector>

using namespace std;


class Adaptive_Binary_Search {
public:
    Adaptive_Binary_Search() : balance(0), i(0) {}

    int adaptive_binary_search(const vector<int> &array, int key);

private:
    ///The shared variable upon multiple runs, on its value depends the choice of the search.
    int balance;
    ///The shared index upon the multiples runs.
    int i;

    int monobound(const vector<int> &array, int key, int bottom, int top);
};


#endif //BINARY_SEARCH_ADAPTIVE_BINARY_SEARCH_H
