#include <vector>

void bubbleSort(std::vector<int>& array) {

    for (int i = array.size() - 1; i >= 1; i--) {

        bool swapOccured = false;

        for (int j = 0; j < i; j++) {

            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapOccured = true;
            }
        }

        if (!swapOccured) {
            break;
        }
    }

}