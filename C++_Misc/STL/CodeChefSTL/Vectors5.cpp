/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU15
*/

#include <iostream>
#include <vector> 
using namespace std;

int main() {
    // Store temperature readings (in °C) for 6 days
    vector<int> temperatures = {33, 27, 36, 25, 30, 38};
    
    // Print a heading for the output
    cout << "Temperatures above 30 degrees:" << endl;

    // Use a for loop with a fixed number of iterations to go through all 6 days
    for(int i=0;i<6;i++){
        if(temperatures[i] > 30){
            cout << "Day " << i+1 << ": " << temperatures[i] << endl;
        }
    }

    return 0;
}
