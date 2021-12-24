#include<iostream>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int sum = 0, s1 = 0;
		s[s.length()] = 'a';
		int max = 0;
		for (int i = 0; i <= s.length(); i++) {
			if (s[i] >= '0' && s[i]<='9') {
				s1 = s1 * 10 + s[i] - 48;
			}
			else {
				if (s1 > max)
					max = s1;
				s1 = 0;
			}
		}
		cout << max << endl;
	}
}
