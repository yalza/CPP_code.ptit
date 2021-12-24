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
		for (int i = 4; i <= n; i++) {
			if ((int)sqrt(i) * (double)sqrt(i) == i&&snt(sqrt(i)))
				cout << i << " ";
		}
		cout << endl;
	}
}
