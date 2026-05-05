#include <iostream>
#include <map>
using namespace std;

int main() {
    // Initialize the two maps
    map<int, int> numbers1;
    map<int, int> numbers2;

    // Fill numbers1
    numbers1[1] = 1;
    numbers1[2] = 2;
    numbers1[3] = 3;
    numbers1[4] = 4;
    numbers1[5] = 5;
    numbers1[6] = 6;
    numbers1[7] = 7;
    numbers1[8] = 8;
    numbers1[9] = 9;

    // Fill numbers2
    numbers2[1] = 10;
    numbers2[2] = 20;
    numbers2[3] = 30;
    numbers2[4] = 40;
    numbers2[5] = 50;
    numbers2[6] = 60;
    numbers2[7] = 70;
    numbers2[8] = 80;
    numbers2[9] = 90;

    // Interlace and print using iterators
    cout << "Interlaced map (numbers1): ";

    auto it1 = numbers1.begin();
    auto it2 = numbers2.begin();

    while (it1 != numbers1.end() && it2 != numbers2.end()) {
        cout << it1->first << ": " << it1->second << ", " << it2->second << " ";
        ++it1;
        ++it2;
    }

    cout << endl;

    return 0;
}