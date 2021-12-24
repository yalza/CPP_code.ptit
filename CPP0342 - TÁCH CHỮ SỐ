#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int sum = 0;
		for (int i = 0; i <= s.length(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				sum += s[i] - 48;
			}
			
		}
		sort(s.begin(), s.end());
		for (int i = 0; i < s.length(); i++)
			if (s[i] < '0' || s[i] > '9')
				cout << s[i];
		cout << sum << endl;
	}
}
