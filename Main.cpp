#include <iostream>
#include "header.h"

using namespace std;

template <typename T>
bool isPrime(T number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (T i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

template <typename T>
int countPrimeNumbers(const T* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    const int size = 10;
    int arr[size];


    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    int primeCount = countPrimeNumbers(arr, size);
    cout << "Number of prime numbers in the array: " << primeCount << std::endl;

    return 0;
}