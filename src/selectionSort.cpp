#include <vector>

void selectionSort(std::vector<int>& array) {

    for (int i = array.size()-1; i >= 1; i--) {
        int index = 0;

        for (int j = 1; j <= i; j++) {
            if (array[index] < array[j]) {
                index = j;
            }
        }
        
        if (index != i) {
            std::swap(array[i], array[index]);        
        }
    }

}