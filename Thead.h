template <typename T>

void findMinMax(const T arr[], size_t size, T& minValue, T& maxValue, size_t& minIndex, size_t& maxIndex) {
    if (size == 0) {
        std::cerr << "Array is empty." << std::endl;
        return;
    }

    minValue = arr[0];
    maxValue = arr[0];
    minIndex = 0;
    maxIndex = 0;

    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}