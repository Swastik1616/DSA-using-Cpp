#include <iostream>
using namespace std;

int main() {
    // Initialize the variable 'season' to represent the current season
    // (1 for Winter, 2 for Rainy, 3 for Summer)
    int season = 2;

    // Use a switch statement to determine and print the weather recommendations
    switch (season) {
        case 1: // If 'season' equals 1
            cout << "Wear warm clothes in winter." << endl;
            break;

        case 2: // If 'season' equals 2
            cout << "Carry an umbrella during the rainy season." << endl;
            break;

        case 3: // If 'season' equals 3
            cout << "Use sunscreen if you're heading out in summer." << endl;
            break;
        }

    return 0;
}
