#include<iostream>
#include<vector>
#include<stdbool.h>
#include<math.h>
#include<algorithm>
using namespace std;

int snt(int n) {
	if (n < 2)return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)return 0;
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int count = 0;
		bool M[1000000];
		for (int i = 1; i < n; i++)M[i] = true;
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				for (int j = i; j < n; j += i)
					M[j] = false;
			}
		}
		for (int i = 1; i < n; i++) {
			if (M[i]==true)
				count++;
			}
		if (snt(count))cout << 1 << endl;
		else
			cout << 0 << endl;
	}
		
}
