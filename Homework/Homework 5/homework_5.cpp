#include <iostream>
using namespace std;

int main() {
    char message[100];
    int vowel_count = 0;

    cout << "Enter a message: ";
    cin.getline(message, 100);

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' ||
            message[i] == 'o' || message[i] == 'u' ||
            message[i] == 'A' || message[i] == 'E' || message[i] == 'I' ||
            message[i] == 'O' || message[i] == 'U') {

            vowel_count++;
        }
    }

    cout << "Number of vowels: " << vowel_count << endl;

    return 0;
}