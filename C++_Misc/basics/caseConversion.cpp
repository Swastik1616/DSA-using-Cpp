//this is awesome man
#include<bits/stdc++.h>
using namespace std;

void UpperToLower(){
    for(char ch='A';ch<='Z';ch++){
        cout << ch << " -> ";
        cout << char(ch + ('a'-'A')) << endl;
    }
}

void LowerToUpper(){
    for(char ch='a';ch<='z';ch++){
        cout << ch << " -> ";
        cout << char(ch - ('a'-'A')) << endl;
    }
}

int main(){
    UpperToLower();
    cout << endl;
    LowerToUpper();
}