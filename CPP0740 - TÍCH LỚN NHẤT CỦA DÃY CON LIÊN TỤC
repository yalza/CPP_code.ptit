#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		long long int max = -1000000;
		for (int i = 0; i < n; i++) {
			 long long int x = m[i];
			 if (x > max)max = x;
			for (int j = i+1; j < n; j++) {
				x = x * m[j];
				if (x > max)max = x;
			}
		}
		
		cout << max << endl;
	}
}
