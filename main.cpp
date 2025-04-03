#include <iostream>
#include <vector>
#include <tuple>
#include <bits/ranges_algo.h>

#include "adaptive_binary_search/adaptive_binary_search.h"
#include "boundless_binary_range_search/boundless_binary_range_search.h"
#include "boundless_binary_search/boundless_binary_search.h"
#include "doubletapped_binary_search/doubletapped_binary_search.h"
#include "monobound_binary_search/monobound_binary_search.h"
#include "monobound_interpolated_binary_search/monobound_interpolated_binary_search.h"
#include "monobound_quaternary_search/monobound_quaternary_search.h"
#include "standard_binary_search/standard_binary_search.h"
#include "tripletapped_binary_search/tripletapped_binary_search.h"

using namespace std;


/**
 * Function that creates a vector reading the user input.
 *
 * @return a vector.
 */
vector<int> create_vector() {
    cout << "We create the array to be reordered.\n"
            "Insert one number at a time (to finish -1): ";

    int number = -1;
    vector<int> array = {};

    while (true) {
        cin >> number;
        if (number == -1) {
            return array;
        }
        array.push_back(number);
    }
}

/**
 * Function that prints a vector.
 *
 * @param vector the vector to print.
 */
void print_vector(vector<int>& vector) {
    ranges::for_each(vector, [](const int num) { cout << num << " "; });
}

int main() {
    cout << "Which binary search algorithm do you want to test?\n"
            "1. Standard binary search\n"
            "2. Boundless binary search\n"
            "3. Doubletapped binary search\n"
            "4. Monobound binary search\n"
            "5. Tripletapped binary search\n"
            "6. Monobound quaternary search\n"
            "7. Monobound interpolated binary search\n"
            "8. Adaptive binary search\n"
            "9. Boundless binary Range search\n"
            "Insert your choice: ";

    int choice = 0;
    cin >> choice;

    vector<int> array = create_vector();
    print_vector(array);

    cout << "\nInsert the number to be searched: ";

    int key = 0;
    cin >> key;

    switch (choice) {
        case 1:
            cout << "The index of the key is: " << Standard_Binary_Search::standard_binary_search(array, key) << "\n";
            break;
        case 2:
            cout << "The index of the key is: " << Boundless_Binary_Search::boundless_binary_search(array, key) << "\n";
            break;
        case 3:
            cout << "The index of the key is: " << Doubletapped_Binary_Search::doubletapped_binary_search(array, key) << "\n";
            break;
        case 4:
            cout << "The index of the key is: " << Monobound_Binary_Search::monobound_binary_search(array, key) << "\n";
            break;
        case 5:
            cout << "The index of the key is: " << Tripletapped_Binary_Search::tripletapped_binary_search(array, key) << "\n";
            break;
        case 6:
            cout << "The index of the key is: " << Monobound_Quaternary_Search::monobound_quaternary_search(array, key) << "\n";
            break;
        case 7:
            cout << "The index of the key is: " << Monobound_Interpolated_Binary_Search::monobound_interpolated_binary_search(array, key) << "\n";
            break;
        case 8: {
            Adaptive_Binary_Search adaptive_binary_search;

            cout << "The index of the key is: " << adaptive_binary_search.adaptive_binary_search(array, key) << "\n";
            break;
        }
        case 9: {
            const tuple<int, int> result = Boundless_Binary_Range_Search::boundless_binary_range_search(array, key);

            cout << "The index of the key is: " << get<0>(result) << ", " << get<1>(result) << "\n";
            break;
        }
        default:
            break;
    }

    return 0;
}
