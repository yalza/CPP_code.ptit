#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
vector<string> X,Y;
void test(int n, string s) {
	for (int i = 0; i <= 1; i++) {
		if (s.length() == n) {
			X.push_back(s);
			Y.push_back(s);
			return;
		}
		else test(n, s + to_string(i));
	}
}

void Sort(int x, int a, int b, int c, int d) {
	if (x == 0)return;
	sort(X.begin() + a, X.begin() + b);
	sort(X.begin() + c, X.begin() + d, greater<string>());
	Sort(x - 1, a, (a + b) / 2, (a + b) / 2, b);
	Sort(x - 1, c, (c + d) / 2, (c + d) / 2, d);
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int n = s.length();
		X.clear();
		Y.clear();
		test(n, "");
		int x = pow(2, n);
		Sort(n, 0, x / 2, x / 2, x);
		for (int i = 0; i < X.size(); i++)
			if (X[i] == s)cout << Y[i];
		
		cout << endl;
	}
}
