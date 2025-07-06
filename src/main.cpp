#include <iostream>
#include <vector>
#include "sortings.h"

int main() {

    std::vector<int> array;
    std::string input;

    std::cout << "Enter numbers (type 'stop' to finish):\n";

    while (true) {
        std::cin >> input;
        if (input == "stop")
        break;
        int num = stoi(input);
        array.push_back(num);
    }
/*
    bruteForce(array);

    std::cout << "Sorted array using brute force: \n";

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }

    insertionSort(array);

    std::cout << "Sorted array using insertion sort: \n";

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }

    selectionSort(array);

    std::cout << "Sorted array using selection sort: \n";

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
*/
    bubbleSort(array);

    std::cout << "Sorted array using bubble sort: \n";

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}