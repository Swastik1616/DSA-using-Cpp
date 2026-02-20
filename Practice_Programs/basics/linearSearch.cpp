/* Problem link - 
https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N,X;
    cin >> N >> X;
        
    int arr[N], count = 0;
    for(int i=0;i<N;i++){
        cin >> arr[i]; 
    }
        
    for(int i=0;i<N;i++){
        if(arr[i]==X)
            count++;
    }
        
    if (count != 0) {
            cout << "YES";
        }
    else cout << "NO";
}
