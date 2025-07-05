#include "sortings.h"
#include <vector>

void insertionSort(std::vector<int>& array) {

    for (int i = 1; i < array.size(); ++i) {
        int current = array[i];

        int j = i - 1;

        while (array[j] > current && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = current;
    }

}