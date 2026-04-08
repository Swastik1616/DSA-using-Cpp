/* Problem Link -
https://www.codechef.com/practice/course/cpp/LPCPAS10/problems/LCPPAS160?tab=statement
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int even = 0;
	int odd = 0;
	for(int i = 0;i<n;i++) cin >> arr[i];
	for(int i = 0;i<n;i++){
	    if(i % 2 == 0){
	        even += arr[i];
	    }
	    else{
	        odd += arr[i];
	    }
	}
	cout<< even - odd <<"\n";
}
