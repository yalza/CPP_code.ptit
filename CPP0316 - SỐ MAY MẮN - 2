#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int test(string s) {
	int n = 0;
	for (int i = 0; i < s.length(); i++) {
		n += s[i] - '0';
	}
	if (n == 9)return 1;
	while (n>=9) {
		int a = 0;
		while (n) {
			a += n % 10;
			n /= 10;
		}
		if (a == 9)return 1;
		n = a;
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string n; cin >> n;
		if (test(n))cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}
