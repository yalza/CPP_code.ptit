#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b) {
	for (int i = a; i >= 1; i--) {
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		ll a, x, y;
		cin >> a >> x >> y;
		ll z = gcd(x, y);
		for (int i = 0; i < z; i++)
			cout << a;
		cout << endl;
	}
}
