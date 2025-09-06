/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU30
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // take number of words

    vector<string> words;
    string word;

    // write your code here to take input using vector
    // and print words with size >= 5
    for(int i=0; i<n; i++){
        cin >> word;
        words.push_back(word);
        if(words[i].size() >= 5) cout << words[i] << endl;
    }
    return 0;
}
