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

    bruteForce(array);

    std::cout << "Sorted array: \n";

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}