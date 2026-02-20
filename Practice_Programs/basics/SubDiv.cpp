/* Problem Link -
https://www.codechef.com/learn/course/cpp-beginner-v2-p1/BP00BC06_V2/problems/BMCV202
*/

//  Update the '_' below to solve the problem
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A,
        B,
        D,
        Q;
        //Accept 2 integers as inputs. Note that A >= B and A is divisble by B.
        cin >> A >> B;
        //Difference of inputs
        D = A - B;
        //Division of inputs. 
        Q = A / B;
        //Print the desired output for each test case
        cout << D << " " << Q << endl;
    }
    return 0;
}