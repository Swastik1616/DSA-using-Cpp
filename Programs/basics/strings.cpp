#include <iostream>
using namespace std;

int main() {
    string fullDate = "2024-12-25";  // Given date in YYYY-MM-DD format

    // Extract month using substr(start_index, length)
    string month = fullDate.substr(5,2);

    // Extract day using substr(start_index, length)
    string day = fullDate.substr(8,2);

    // Combine month and day with a slash
    string shortFormat = month + "/" + day;

    // Display the result
    cout << "Original Date: " << fullDate << endl;
    cout << "Short Format: " << shortFormat << endl;

    // find and rfind
    cout << "-------------------------" << endl;
    string text = "online";          // A simple word

    size_t first = text.find('n');   // Find first 'n' bcoz searches from L to R
    size_t last = text.rfind('n');   // Find last 'n' bcoz searches from R to L

    cout << first << endl;           // Show first 'n' position Output: 1
    cout << last << endl;            // Show last 'n' position Output: 4
    return 0;
}