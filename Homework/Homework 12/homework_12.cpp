#include <iostream>
#include <vector>

int main() {
    // Initialize the two vectors
    std::vector<int> numbers1 = { 1,2,3,4,5,6,7,8,9 };
    std::vector<int> numbers2 = { 10,20,30,40,50,60,70,80,90 };

    // Resize numbers1 to hold all elements (optional but required)
    numbers1.resize(numbers1.size() + numbers2.size());

    // Reset numbers1 back to original values after resize
    numbers1 = { 1,2,3,4,5,6,7,8,9 };

    // Iterator for numbers1
    std::vector<int>::iterator it = numbers1.begin();

    // Interlace the vectors
    for (std::vector<int>::iterator it2 = numbers2.begin(); it2 != numbers2.end(); ++it2) {
        ++it;
        it = numbers1.insert(it, *it2);
        ++it;
    }

    // Print the interlaced vector
    std::cout << "Interlaced vector (numbers1): ";
    for (int num : numbers1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}