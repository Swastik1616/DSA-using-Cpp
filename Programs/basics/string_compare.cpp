#include<bits/stdc++.h>
using namespace std;

int main(){
   /*  string str1;
    string str2;
    // cin >> str1;
    // cout << str1; // prints only till 1st space
    getline(cin,str2);
    cout << str2; // prints entire line
    */

    string a = "mango";  // First string
    string b = "manga";  // Second string to compare

    // Compare the two strings lexicographically
    // They match until the last character: 'o' in "mango" vs 'a' in "manga"
    // Since 'o' > 'a' in ASCII, the result is positive
    int result = a.compare(b);  // Returns 14 ('o' - 'a' = 111 - 97)

    // Show the comparison result
    cout << "Comparison result: " << result << endl;  // Output: 14
    /*The compare() method in C++ is used to compare two strings and determine their lexicographical order (dictionary order). It is a member function of the string class and returns an integer value based on the comparison

Syntax:

string1.compare(string2);
string1 is the caller, and string2 is the string it is being compared to.
Returns 0 if strings are equal, < 0 if the caller is less, and > 0 if the caller is greater.
The comparison is based on ASCII values of characters from left to right; the first unmatched character decides the result.
ASCII (American Standard Code for Information Interchange) assigns a numeric value to each character (e.g., 'A' = 65, 'a' = 97). Learn more here: ascii-code.com*/
}