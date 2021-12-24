#include<iostream>
#include<string>
using namespace std;

int main() {
	string s; cin >> s;
	int count = 0;
	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'A') {
			s[i] = 'A';
			count++;
		}
		if (s[i - 1] == 'B' && s[i] == 'A' && s[i + 1] == 'B') {
			s[i] = 'B';
			count++;
		}
		
	}

		int x = 0;
		if (s[0] == 'B' && s[1] == 'A') {
			s[0] = 'A'; count++;
		}
		if (s[s.length() - 2] == 'A' && s[s.length() - 1] == 'B') {
			s[s.length() - 1] = 'A'; count++;
		}
		for (int i = 0; i < s.length() - 1; i++)
			if (s[i] != s[i + 1]) {
				count++; x++;
			}
		if (s[0] == 'A' && s[s.length() - 1] == 'B')
			count++;
		if (s[0] == 'B' && s[s.length() - 1] == 'B')
			count++;
		cout << count;

}
