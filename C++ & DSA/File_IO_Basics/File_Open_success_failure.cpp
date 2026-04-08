/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/UCSPUP/problems/YCOFLE02?folder=%2Fhome%2Fchef%2Fworkspace
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "status.txt";
    ofstream myFile;

    myFile.open(filename);

    if (myFile.is_open()) {
        cout << "File opened successfully!" << endl;
        myFile.close();
        if (!myFile.is_open()) {
            cout << "File closed successfully!" << endl;
        }
    } else {
        cout << "File opening failed!" << endl;
    }

    cout << "Program complete." << endl;

    return 0;
}