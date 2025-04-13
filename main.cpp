#include <iostream>
#include <vector>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<int> numbers;
    std::stringstream ss(input);
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }
    QuickSort quicksort;
    numbers = quicksort.sort(numbers);
    RecursiveBinarySearch search;
    bool found = search.search(numbers, 1);
    if (found) {
        std::cout << "true";
    } else {
        std::cout << "false";
    }
    for (int n : numbers) {
        std::cout << " " << n;
    }
    std::cout << std::endl;
    return 0;
}
