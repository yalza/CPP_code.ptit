#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		string m = a, n = b;
		long long s1=0, x1=0,s2=0,x2=0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == '6')a[i] = '5';
			s1 = s1 * 10 + a[i] - 48;
			if (m[i] == '5')m[i] = '6';
			x1 = x1 * 10 + m[i] - 48;
		}
		for (int i = 0; i < b.length(); i++) {
			if (b[i] == '6')b[i] = '5';
			s2 = s2 * 10 + b[i] - 48;
			if (n[i] == '5')n[i] = '6';
			x2 = x2 * 10 +n[i] - 48;
		}
		cout << s1+s2 << " " << x1+x2 << endl;
	}
}
