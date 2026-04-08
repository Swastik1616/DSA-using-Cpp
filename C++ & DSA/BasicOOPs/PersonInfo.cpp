/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/JMMMGV/problems/FFKWWT10
*/

#include <iostream>
using namespace std;

class Person {
public:
 string name;  
    int age;      

    
    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    
  // write your code here
    Person p;
    cin >> p.name;
    cin >> p.age;
    p.displayPersonInfo();
    return 0;
}
