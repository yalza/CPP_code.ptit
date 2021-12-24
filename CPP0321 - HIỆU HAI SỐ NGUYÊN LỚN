#include<iostream>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		if (a.length() < b.length() || a.length() == b.length() && a[0] < b[0])swap(a, b);
		while (a.length() != b.length())b.insert(0, "0");
		string c;
		int x;
		for (int i = a.length() - 1; i >= 0; i--) {
			if (a[i] >= b[i]) {
				x = a[i] - b[i];
			}
			else {
				x = a[i] - b[i] + 10;
				a[i - 1] -= 1;
			}
			c.push_back(x + '0');
		}
		for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
		cout << c << endl;
	}
}
