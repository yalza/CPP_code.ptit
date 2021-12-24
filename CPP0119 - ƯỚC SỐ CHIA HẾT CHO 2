#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int count = 0;
		for (int i = 2; i < sqrt(2 * n); i += 2) {
			if (n % i == 0)
				count++;
		}
		count *= 2;
		int x = sqrt(2 * n);
		if ((int)sqrt(2 * n) * (double)sqrt(2 * n) == 2 * n && n % x == 0 && x % 2 == 0)
			count++;
		cout << count << endl;
	}
}
