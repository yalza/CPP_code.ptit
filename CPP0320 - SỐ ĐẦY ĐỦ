#include<iostream>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int M[10] = { 0 };
		int u = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] < '0' || s[i]>'9'||s[0]=='0')u = 1;
		}
		int y = 0;
		if (u == 1)cout << "INVALID\n";
		else {
			for (int i = 0; i < s.length(); i++) {
				M[s[i] - 48]++;
			}
			for (int i = 0; i < 10; i++) {
				if (M[i] > 0)y++;
			}
			if (y == 10)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	
	}
}
