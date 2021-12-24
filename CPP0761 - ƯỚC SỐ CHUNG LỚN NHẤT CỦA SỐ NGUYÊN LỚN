#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		string s; cin >> s;
		for (ll i = n; i >= 1; i--) {
			ll x = 0;
			if (n % i == 0) {
				for (int j = 0; j < s.length(); j++) {
					x = x * 10 + s[j] - 48;
					x = x % i;
				}
				if (x == 0) {
					cout << i << endl;
					break;
				}
			}
			if (i == n) {
				i = i - n / 2 + 2;
			}
		}
	}
}
