/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DIPEBA/problems/HQWZWJ10?tab=statement
*/

#include <iostream>
using namespace std;

// Function to calculate and print the sum of even and odd numbers
void MySum(int n){
    int e = 0;
    int o = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0) e+=i;
        else o+=i;
    }
    cout << "Sum of even numbers: " << e << endl;
    cout << "Sum of odd numbers: " << o;
}

int main() {
    int n;
    cin >> n;
    MySum(n);
    return 0;
}
