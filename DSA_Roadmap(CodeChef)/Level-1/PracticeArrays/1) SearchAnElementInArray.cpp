/* Problem link -
https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR
*/
// latest -
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,x;
    cin >> n >> x;
    int c=0;
    for(int i=0;i<n;i++){
        int elem;
        cin >> elem;
        if(elem==x) c=1; 
    }
    if(c) cout << "YES\n";
    else cout << "NO\n";
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int N,X;
//     cin >> N >> X;
        
//     int arr[N], count = 0;
//     for(int i=0;i<N;i++){
//         cin >> arr[i]; 
//     }
        
//     for(int i=0;i<N;i++){
//         if(arr[i]==X)
//             count++;
//     }
        
//     if (count != 0) {
//             cout << "YES";
//         }
//     else cout << "NO";
// }