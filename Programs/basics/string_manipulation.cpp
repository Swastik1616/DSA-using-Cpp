#include<bits/stdc++.h>
using namespace std;

int main(){
    /*str1.append(str2) = str1 + str2, appends str2 
    at the end of str1 and updates the value of str1 */
    string str1 = "C++ ";
    string str2 = "is cool";

    cout << str1 + str2 << endl;
    str1.append(str2);
    cout << str1 << endl;
    cout << "Cleary, the comment is proved!" << endl;

    /*transfom function of algorithms library 
    cane be used with ::to upper to convert the
    characters of the string to uppercase*/
    
    // Headline text
    string headline = "breaking news: new discovery";

    // Convert the headline to uppercase
              //start from here  //end at this  //store from here
    transform(headline.begin(), headline.end(), headline.begin(), ::toupper);
    
    // Display the uppercase headline
    cout << "Uppercase Headline -  " << headline << endl;

    /*similarly use :tolower to 
    convert to lower case*/
    transform(headline.begin(), headline.end(), headline.begin(), ::tolower);
    cout << "Lowercase Headline -  " << headline << endl;
}