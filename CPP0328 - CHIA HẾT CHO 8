#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int test(string s, int n) {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		int sum = 0;
		for (int j = i; j < s.length(); j++) {
			sum = sum * 10 + s[j] - 48;
			sum %= n;
			if (sum == 0)
				count++;
		}
	}
	return count;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s, 8) - test(s, 24) << endl;
	}
	
}
