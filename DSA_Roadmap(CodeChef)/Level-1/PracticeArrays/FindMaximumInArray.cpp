/* Problem Link -
https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int a[N];
        for(int i=0;i<N;i++){
            cin >> a[i];
        }
        int max = a[0];
        for(int i = 0; i<N; i++){
            if(a[i]>max) max = a[i];
        }
        cout << max << endl;
    }
}
