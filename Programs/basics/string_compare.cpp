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

}