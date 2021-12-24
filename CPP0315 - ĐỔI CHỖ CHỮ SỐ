#include<iostream>
#include<string>
using namespace std;
string test(string s) {
	for (int i = s.length() - 1; i > 0; i--) {
		if (s[i] < s[i - 1]) {
			int x = i;
			for (int j = i; j < s.length(); j++) {
				if (s[j] > s[x] && s[j] < s[i - 1])
					x = j;
			}
			swap(s[x], s[i-1]);
			return s;
		}
	}
	return "-1";
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s) << endl;
	}
}
