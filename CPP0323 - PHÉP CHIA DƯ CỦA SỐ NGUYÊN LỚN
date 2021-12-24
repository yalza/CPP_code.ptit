#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		ll n; cin >> n;
		ll a = 0;
		for (int i = 0; i < s.length(); i++) {
			a = a * 10 + s[i] - '0';
			a %= n;
		}
		cout << a << endl;
	}
}
