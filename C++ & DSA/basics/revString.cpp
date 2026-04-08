#include<bits/stdc++.h>
using namespace std;

string Rev(string str){
    int len = str.length();
	string temp = "";
	for(int i = len-1; i>=0;i--){
		temp += str[i];
	}
	return temp;
}

int main (){
    string str;
    cin >> str;
    cout << Rev(str);
}