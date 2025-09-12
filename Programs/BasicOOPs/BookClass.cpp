/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DALKGF/problems/UXQHKH10
*/

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
    
    Book(){
        cout << "Book 1 (Default Constructor):\n";
        title = "Unknown";
        author = "Unknown";
        price = 0.00;
    }
    
    Book(string bookTitle, string bookAuthor, double bookPrice){
        cout << "Book 2 (Paramaterized Constructor):\n";
        title = bookTitle;
        author = bookAuthor;
        price = bookPrice;
    }
    
    void displayBookInfo() {
       cout << "Title: " << title << ", Author: " << author << ", Price: $" << price <<  endl << endl;
    }
};

int main() {
    string title, author;
    double price;
    getline(cin,title);
    getline(cin,author);
    cin >> price;

    Book b1;
    b1.displayBookInfo();

    Book b2(title,author,price);
    b2.displayBookInfo();

    return 0;
}
