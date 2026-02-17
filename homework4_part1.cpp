#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()

using namespace std;

// Global variables for map size
int mapWidth;
int mapHeight;

// Function to create random map size (up to 20x20 centered at 0,0)
void createMap() {
    mapWidth = rand() % 21;   // 0 to 20
    mapHeight = rand() % 21;  // 0 to 20

    // Making sure width and height are at least 1
    if (mapWidth == 0) {
        mapWidth = 1;
    }
    if (mapHeight == 0) {
        mapHeight = 1;
    }
}

// Function to check if point is inside the map
bool isValidLocation(int x, int y) {
    int halfWidth = mapWidth / 2;
    int halfHeight = mapHeight / 2;

    // Check boundaries of the input
    if (x >= -halfWidth && x <= halfWidth &&
        y >= -halfHeight && y <= halfHeight) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    srand(time(0));  // seed random numbers

    string name;
    int x, y;

    // Creates the random map
    createMap();

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter location (x y): ";
    cin >> x >> y;

    cout << "\nMap size: " << mapWidth << " by " << mapHeight << endl;

    // Check location using function stated at the top
    if (isValidLocation(x, y)) {
        cout << name << ", your location is inside the map!" << endl;
    }
    else {
        cout << name << ", your location is outside the map!" << endl;
    }

    return 0;
}