#include<iostream>
#include<string>
using namespace std;
string mul(string a, string b) {
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int x;
	for (int i = a.length() - 1; i >= 0; i--) {
		if (a[i] >= b[i])
			x = a[i] - b[i];
		else {
			x = a[i] - b[i] + 10;
			a[i - 1] -= 1;
		}
		c.push_back(x + '0');
	}
	for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
	return c;
}
string add(string a, string b) {
	if (a.length() < b.length())swap(a, b);
	while (a.length() != b.length())b.insert(0, "0");
	string c;
	int nho = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int x = a[i] + b[i] - 96 + nho;
		nho = x / 10;
		int z = x % 10;
		c.push_back(z + '0');
	}
	if (nho > 0)c.push_back(nho + '0');
	for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
	return c;
}

int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		int z;
		string c,d="0", e;
		for(int i=0;i<a.length();i++){
			c.push_back(a[i]);
			d.push_back('0');
			int o = 0; 
			while (( c.length() == b.length() && c>b)||c.length()>b.length()) {
					o++;
					c = mul(c, b);
					while (c[0] == '0')c.erase(0, 1);
			}
			string e = ""; e.push_back(o + '0');
			d = add(d, e);
		}
		if (c == b)d = add(d, "1");
		if (a.length()<b.length()||a.length()==b.length()&&a<b)cout << "0" << endl;
		else {
			while (d[0] == '0')d.erase(0, 1);
			cout << d << endl;
		}
	}
}
