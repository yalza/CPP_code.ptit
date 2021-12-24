#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<fstream>
using namespace std;
int main() {
	set<string> X,Y,Z;
	string s;
	fstream file;
	file.open("DATA1.in");
	while (file >> s) {
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
		X.insert(s);Z.insert(s);
	}
	file.close();
	file.open("DATA2.in");
	while (file >> s) {
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
		Y.insert(s);Z.insert(s);
	}
	file.close();
	for (auto i = Z.begin(); i != Z.end(); i++)
		cout << *i << " ";
	cout << endl;
	for (auto i = X.begin(); i != X.end(); i++)
		if (Y.count(*i) != 0)
			cout << *i << " ";
	cout << endl;
}
