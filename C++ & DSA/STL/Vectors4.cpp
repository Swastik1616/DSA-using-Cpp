/* 
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU14
*/

#include <iostream>
#include <vector> 
using namespace std;

int main() {
    // Initialize a vector with movie ratings (out of 10)
    vector<float> movieRatings = {8.5, 7.2, 9.0, 6.8, 7.9, 8.3};
    
    // Print selected ratings from the list
    cout << "Selected movie ratings:" << endl;

    // Access and print the 1st, 3rd, and 5th movie ratings
    cout << movieRatings[0] << ", "; 
    cout << movieRatings.at(2) << ", "; 
    cout << movieRatings[4] << endl;

    return 0;
}