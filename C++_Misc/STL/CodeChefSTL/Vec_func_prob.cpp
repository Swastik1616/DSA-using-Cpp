/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ10
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> purchases;
    
    //Your code goes here
    int n,val,rem;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> val;
        purchases.push_back(val);
    }
    cin >> rem;
    int count = 0;
    for(int i=0;i<purchases.size();i++){
        if(purchases[i] == rem) {
            purchases.erase(purchases.begin() + i);
            count++;
        }
    }
    if(count == 0) cout << "Item not found.\n";
    // Output the updated list of purchases using a normal for loop
    cout << "Updated purchases: ";
    for (int i = 0; i < purchases.size(); ++i) {
        cout << purchases[i] << " ";
    }
    cout << endl;

    return 0;
    
}