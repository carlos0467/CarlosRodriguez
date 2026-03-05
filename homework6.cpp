#include <iostream>
using namespace std;

int main()
{
    int data[] = { 1, 3, 6, 7, 9 };
    int data1[] = { 5, 3, 3, 11, 7 };

    int size = 5;

    // Part 1: swap without another array
    for (int i = 0; i < size; i++)
    {
        data[i] = data[i] + data1[i];
        data1[i] = data[i] - data1[i];
        data[i] = data[i] - data1[i];
    }

    // Display swapped arrays
    cout << "After swap:\n";

    cout << "data: ";
    for (int i = 0; i < size; i++)
        cout << data[i] << " ";

    cout << "\ndata1: ";
    for (int i = 0; i < size; i++)
        cout << data1[i] << " ";

    cout << "\n\n";

    // Part 2: find numbers that are the same
    cout << "Numbers that are the same:\n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (data[i] == data1[j])
            {
                cout << data[i] << " ";
            }
        }
    }

    return 0;
}