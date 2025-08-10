#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {          // Outer loop
        for (int j = 1; j <= i; j++) {      // Inner loop
            cout << i * j << "  ";              // Multiply row and column values
        }
        cout << endl;                           // Move to next line after each row
    }
    return 0;
}