#include<iostream>
using namespace std;
typedef long long int ll;
int test(int n, int p)
{
	ll a = 0;
	for (ll x = 1; x < p; x++)
	{
		if ((x * x) % p == 1)
		{
			ll y = x + p * (n / p);
			if (y > n)
				y -= p;
			a += ((y - x) / p + 1);
		}
	}
	return a;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		cout << test(a, b) << endl;
	}
}
