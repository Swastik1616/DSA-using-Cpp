/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU24
*/


#include <iostream>    
#include <vector>       // Required to use vector
using namespace std;

int main() {
    // Create and initialize a vector containing book titles
    vector<string> books = {"The Psychology of Money", "Sapiens", "Zero to One"};

    // Print the total number of books using the size() method
    // Code
    cout << "Total books in collection: " << books.size();

    cout << "Book Titles: " << endl;
    // Print each book title using a regular for loop
    // Code
    for(int i = 0; i < books.size(); i++){
        cout << "- " << books[i] << endl;
    }

    return 0; 
}