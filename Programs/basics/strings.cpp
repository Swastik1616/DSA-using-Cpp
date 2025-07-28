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

    return 0;
}