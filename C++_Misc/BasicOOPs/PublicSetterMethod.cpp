/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH13
*/

#include <iostream>
using namespace std;

class Product {
private:
    double price;  // Private variable: Stores product price

public:
    // Setter method to update the product price
    void setPrice(double newPrice) {
        price = newPrice;
    }

    // Method to display the current price
    void showPrice() {
        cout << "Product Price: $" << price << endl;
    }
};

int main() {
    Product item;  // Creating a Product object

    // Setting price using setter method
    item.setPrice(199.99);

    item.showPrice();  // Displaying updated price

    return 0;
}

