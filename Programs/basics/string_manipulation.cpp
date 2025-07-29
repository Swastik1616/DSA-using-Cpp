#include<bits/stdc++.h>
using namespace std;

int main(){
    /*str1.append(str2) = str1 + str2, appends str2 
    at the end of str1 and updates the value of str1 */
    string str1 = "C++ ";
    string str2 = "is cool";

    cout << str1 + str2 << endl;
    str1.append(str2);
    cout << str1 << endl;
    cout << "Cleary, the comment is proved!" << endl;
}