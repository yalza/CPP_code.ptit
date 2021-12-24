#include<iostream>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		for (int i = 0; i < s.length(); i++) {
			int count = 0;
			for (int j = i; j < s.length(); j++) {
				if (s[i] == s[j])
					count++;
			}
			cout << s[i] << count;
			i += count-1;
		}
		cout << endl;
	}
}
