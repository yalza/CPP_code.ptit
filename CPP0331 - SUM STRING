#include<iostream>
#include<string>
using namespace std;
string add(string a, string b) {
	if (a.length() < b.length())swap(a, b);
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int nho = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int x = a[i] + b[i] - 96 + nho;
		nho = x / 10;
		c.push_back(x % 10 + '0');
	}
	if (nho > 0)c.push_back(nho + '0');
	for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
	return c;
}
int TF(string a, string b,string s) {
	int x = a.length() + b.length();
	while ( x< s.length()) {
		string c = add(a, b);
		string d = s.substr(x, c.length());
		if (c == d) {
			a = b; b = c; x += c.length();
		}
		else return 0;
	}
	return 1;
}
string test(string s) {
	string a;
	for (int i = 0; i <= s.length()/2; i++) {
		a.push_back(s[i]);
		string b;
		for (int j = i + 1; j <= s.length()*2/3; j++) {
			b.push_back(s[j]);
			if (TF(a, b,s))return "Yes\n";
		}
	}
	return "No\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s);
	}
}
