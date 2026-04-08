/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DALKGF/problems/UXQHKH01
*/

#include <iostream>
using namespace std;

class Codechef {
public: // Access Specifier: 'public' means that the members below are accessible from outside the class
    // Default Constructor
    Codechef() {
        cout << "Default Constructor is called!" << endl;
    }
};

int main() {
    // Creating an object, which triggers the default constructor
    Codechef obj1;  // Default Constructor is called automatically

    return 0;
}