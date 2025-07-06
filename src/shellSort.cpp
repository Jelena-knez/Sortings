#include <vector>
#include <cmath>

void shellSort(std::vector<int>& array) {

    int n = array.size();

    for (int k = n / 2; k > 0; k /= 2) {
        for (int i = k; i < n; i++) {
            int current = array[i];
            int j = i;

            while (j >= k && array[j - k] > current) {
                std::swap(array[j], array[j - k]);
                j = j - k;
            }

            array[j] = current;
        }

    }

    

}