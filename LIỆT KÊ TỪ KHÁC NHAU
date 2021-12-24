#include<iostream>
#include<fstream>
#include<vector>
#include<set>
using namespace std;

int main() {
	fstream file;
	string s;
	set<string> S;
	file.open("VANBAN.in");
	while (file>>s) {
		for (int j = 0; j < s.length(); j++)
			s[j] = tolower(s[j]);
		S.insert(s);
	}
	for (auto i = S.begin(); i != S.end(); i++) {
		cout << *i << endl;
	}
	file.close();
}
