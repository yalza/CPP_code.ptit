#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;
int main() {
	string name;
	getline(cin, name);
	int a = name.find_last_of(" ");
	string s = name.substr(a + 1, 100);
	name.erase(a, 100);
	for (int i = 0; i < s.length(); i++) {
		s.at(i) = tolower(s.at(i)); cout << s.at(i);
	}
	for (int i = 0; i < name.length(); i++)
		if (i == 0 || name[i - 1] == ' ') {
			name.at(i) = tolower(name.at(i)); cout << name.at(i);
		}
	cout << "@ptit.edu.vn";
	return 0;
}
