#include <iostream>
#include "Header.h"

using namespace std;

template<typename T>
void reverseArray(T arr[], size_t size) {
    size_t start = 0;
    size_t end = size - 1;

    while (start < end) {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int intArray[] = { rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 100 };
    double doubleArray[] = { static_cast<double>(rand() % 100) / 10.0, static_cast<double>(rand() % 100) / 10.0,
                            static_cast<double>(rand() % 100) / 10.0, static_cast<double>(rand() % 100) / 10.0,
                            static_cast<double>(rand() % 100) / 10.0 };

    const size_t INT_ARRAY_SIZE = sizeof(intArray) / sizeof(intArray[0]);
    const size_t DOUBLE_ARRAY_SIZE = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "Original integer array: ";
    for (size_t i = 0; i < INT_ARRAY_SIZE; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    cout << "Original double array: ";
    for (size_t i = 0; i < DOUBLE_ARRAY_SIZE; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    reverseArray(intArray, INT_ARRAY_SIZE);
    reverseArray(doubleArray, DOUBLE_ARRAY_SIZE);

    cout << "Reversed integer array: ";
    for (size_t i = 0; i < INT_ARRAY_SIZE; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    cout << "Reversed double array: ";
    for (size_t i = 0; i < DOUBLE_ARRAY_SIZE; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    return 0;
}