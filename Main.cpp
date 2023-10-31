#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

template <typename T>
void initializeMatrix(vector<vector<T>>& matrix, int size) {
    matrix.resize(size, vector<T>(size, 0));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = static_cast<T>(rand() % 100);
        }
    }
}

template <typename T>
void printMatrix(const vector<vector<T>>& matrix) {
    for (const auto& row : matrix) {
        for (T val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

template <typename T>
void findDiagonalMinMax(const vector<vector<T>>& matrix) {
    int size = matrix.size();
    T max = matrix[0][0];
    T min = matrix[0][0];

    for (int i = 1; i < size; ++i) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }

    cout << "Max on the main diagonal: " << max << endl;
    cout << "Min on the main diagonal: " << min << endl;
}

template <typename T>
void sortRowsAscending(vector<vector<T>>& matrix) {
    for (auto& row : matrix) {
        sort(row.begin(), row.end());
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int size = 4;

    vector<vector<int>> intMatrix;
    vector<vector<double>> doubleMatrix;

    initializeMatrix(intMatrix, size);
    initializeMatrix(doubleMatrix, size);

    cout << "Initialized integer matrix:" << endl;
    printMatrix(intMatrix);
    findDiagonalMinMax(intMatrix);
    sortRowsAscending(intMatrix);
    cout << "Integer matrix with rows sorted in ascending order:" << endl;
    printMatrix(intMatrix);

    cout << "Initialized double matrix:" << endl;
    printMatrix(doubleMatrix);
    findDiagonalMinMax(doubleMatrix);
    sortRowsAscending(doubleMatrix);
    cout << "Double matrix with rows sorted in ascending order:" << endl;
    printMatrix(doubleMatrix);

    return 0;
}