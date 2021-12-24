#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b) {
	for (ll i = a; i >= 1; i--)
		if (a % i == 0 && b % i == 0)
			return i;
}
ll bc(ll a,ll b){
    return a*b/gcd(a,b);
}
int main()
{
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll sum = 1;
		for (int i = 1; i <= n; i++)
			sum = bc(i,sum);
		cout << sum << endl;
	}
}
