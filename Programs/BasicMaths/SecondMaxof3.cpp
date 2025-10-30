/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SNDMAX
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
}
