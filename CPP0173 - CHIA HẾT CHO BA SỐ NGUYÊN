#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b) {
	if (a > b)return gcd(b, a);
	for (ll i = a; i >= 1; i--)
		if (a % i == 0 && b % i == 0)
			return i;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		ll a = x * y / gcd(x, y);
		a = a * z / gcd(a, z);
		ll d = pow(10, n - 1);
		ll e = pow(10, n);
		if (a >= e)
			cout << -1 << endl;
		else {
			ll c = d % a;
			ll u = d + a - c;
			if (c == 0)
				cout << d << endl;
			else
			cout << u << endl;
		}
	}
}
