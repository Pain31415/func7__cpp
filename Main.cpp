#include <iostream>
#include "Thead.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    const size_t INT_ARRAY_SIZE = 6;
    const size_t DOUBLE_ARRAY_SIZE = 5;

    int intArray[INT_ARRAY_SIZE];
    double doubleArray[DOUBLE_ARRAY_SIZE];

    for (size_t i = 0; i < INT_ARRAY_SIZE; ++i) {
        intArray[i] = rand() % 100;
    }

    for (size_t i = 0; i < DOUBLE_ARRAY_SIZE; ++i) {
        doubleArray[i] = (rand() % 1000) / 10.0;
    }

    int intMinValue, intMaxValue;
    double doubleMinValue, doubleMaxValue;
    size_t intMinIndex, intMaxIndex, doubleMinIndex, doubleMaxIndex;

    findMinMax(intArray, INT_ARRAY_SIZE, intMinValue, intMaxValue, intMinIndex, intMaxIndex);
    findMinMax(doubleArray, DOUBLE_ARRAY_SIZE, doubleMinValue, doubleMaxValue, doubleMinIndex, doubleMaxIndex);

    cout << "For the integer array: Min = " << intMinValue << " at index " << intMinIndex
        << ", Max = " << intMaxValue << " at index " << intMaxIndex << endl;

    cout << "For the double array: Min = " << doubleMinValue << " at index " << doubleMinIndex
        << ", Max = " << doubleMaxValue << " at index " << doubleMaxIndex << endl;

    return 0;
}