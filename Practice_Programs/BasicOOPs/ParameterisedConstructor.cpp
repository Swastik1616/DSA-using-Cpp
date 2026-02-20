/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DALKGF/problems/UXQHKH06
*/

#include <iostream>
using namespace std;
class Car {
public:
    string model;  // Attribute to store the car's model
    int year;      // Attribute to store the year of the car

    // Parameterized constructor to initialize model and year
    Car(string carModel, int carYear) {
        model = carModel;
        year = carYear;
    }

    // Method to display the car's details
    void displayCarDetails() {
        cout << "Car Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    // Create a Car object with specific model and year using the parameterized constructor
    Car car1("Tesla Model S", 2022);

    // Displaying the car's details
    car1.displayCarDetails();  // Display Tesla details

    return 0;
}