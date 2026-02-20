/*Problem Link -
https://www.codechef.com/learn/course/cpp-development/OARSPV/problems/VYDCBN05
*/

#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        char ch = word[i];  

        if (ch >= '0' && ch <= '9')
            word[i] = '*';
            
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            word[i] = '#';
            
        else if (ch >= 'A' && ch <= 'Z')
            word[i] = '@';
    }
    cout << word << endl;

    return 0;
}
// expected output = *s@#st#@*