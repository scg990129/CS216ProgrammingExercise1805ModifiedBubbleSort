#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main() {
    int list[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};

    int *ptr = list;
    modifiedBubbleSort(ptr, 14);

    for(auto i: list)
        cout << i << " ";

    int intList[] = {2, 56, 34, 25, 73,
                     46, 89, 10, 5, 16};

    double doubleList[] = {3.45, 2.34, 1.98, 55.43, 2.4353,4.5423};

    modifiedBubbleSort(intList, 10);
    modifiedBubbleSort(doubleList, 6);


    for (int i : intList)
        cout << i << " ";

    cout << endl;

    for (double i : doubleList)
        cout << i << " ";

    return 0;
}

// Modified Bubble Sort|
// Write a complete C++ function template to implement the modified bubble sort algorithm
// given in Exercise 9 of this chapter. Call this function modifiedBubbleSort.
// Also, write a program to test your function.


