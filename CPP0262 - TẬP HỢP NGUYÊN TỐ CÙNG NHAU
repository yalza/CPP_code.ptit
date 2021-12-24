#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		ll n, m; cin >> n >> m;
		ll sumn = n * (n + 1) / 2;
		ll x = (sumn + m) / 2, y = (sumn - m) / 2;
		if (__gcd(x, y) == 1&&(sumn+m)%2==0)cout << "Yes\n";
		else cout << "No\n";
	}
}
