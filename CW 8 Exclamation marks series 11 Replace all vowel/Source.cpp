#include<iostream>
#include<string>
#include<regex>
using namespace std;

string replace(const string& s){
	return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}
int main() {
	string s = { "Hi!" };
	replace(s);
	return 0;
}