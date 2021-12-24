#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
int main()
{
		long long int n; cin >> n;
		int x = 0;
		while (n % 2 == 0) {
			x++; n /= 2;
		}
		if (x)
			cout << 2 << " " << x << "\n";
		long long int i = 3;
		while (i <= sqrt(n)) {
			int a = 0;
			while (n % i == 0) {
				a++;
				n /= i;
			}
			if (a > 0)
				cout << i << " " << a << "\n";
			i += 2;
		}
		if (n > 2)
			cout << n << " " << 1;
		cout << endl;
	
}
