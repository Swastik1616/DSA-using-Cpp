#include <iostream>  
using namespace std;

int main() {
    int number, range;
    cin >> number;
    cin >> range;
    for (int i = 1; i <= range; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;  
}