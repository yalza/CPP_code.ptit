#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
int snt(int n) {
	if (n < 2)return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)return 0;
	return 1;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int o = n;
		int g = 0, N[100];
		for (int i = 2; i <= n; i++) {
			if (n % i == 0 && snt(i)) {
				N[g++] = i;
				while (n % i == 0 && snt(i)) {
					n /= i;
				}
			}
		}
		int s = 1;
		for (int i = 0; i < g; i++)s = s * N[i];
		if (g == 3 && s == o)cout << 1 << endl;
		else cout << 0 << endl;
	}
}
