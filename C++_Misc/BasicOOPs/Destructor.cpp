/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DALKGF/problems/UXQHKH16
*/

#include <iostream>
using namespace std;

class Sample {
public:
    // Constructor
    Sample() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Sample() {
        cout << "Destructor called: Object is being destroyed!" << endl;
    }
};

int main() {
    // Create an object of Sample
    Sample obj;  // Constructor is called here

    // Object goes out of scope at the end of main
    return 0;  // Destructor will be called automatically here
}