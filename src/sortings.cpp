#include "sortings.h"
#include <vector>
#include <iostream>

void bruteForce(std::vector<int>& array) {

    for (int i = 1; i < array.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[i]) {
                std::swap(array[j], array[i]);
            }
        }
    }

}