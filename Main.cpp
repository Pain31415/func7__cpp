#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findMax(const int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMax(const int arr[][3], int rows) {
    int max = INT_MIN;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMax(const int arr[][3][2], int rows) {
    int max = INT_MIN;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                if (arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    return findMax(findMax(a, b), c);
}

int main() {
    srand(time(0));

    int oneDim[5];
    int twoDim[2][3];
    int threeDim[2][3][2];

    for (int i = 0; i < 5; ++i) {
        oneDim[i] = rand() % 100;
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            twoDim[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                threeDim[i][j][k] = rand() % 100;
            }
        }
    }

    int maxOneDim = findMax(oneDim, 5);
    int maxTwoDim = findMax(twoDim, 2);
    int maxThreeDim = findMax(threeDim, 2);
    int maxTwoInt = findMax(10, 30);
    int maxThreeInt = findMax(20, 50, 30);

    cout << "Max in one-dimensional array: " << maxOneDim << endl;
    cout << "Max in two-dimensional array: " << maxTwoDim << endl;
    cout << "Max in three-dimensional array: " << maxThreeDim << endl;
    cout << "Max of two integers: " << maxTwoInt << endl;
    cout << "Max of three integers: " << maxThreeInt << endl;

    return 0;
}