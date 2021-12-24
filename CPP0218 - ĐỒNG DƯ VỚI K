#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		int min =0;
		for (int i = 0; i < n; i++) {
			cin >> m[i];
			if (m[i] > min)min = m[i];
		}
		int s = 0;
		for (int i = 0; i < n-1; i++) {
			if (m[i] != m[i + 1])s = 1;
		}
		int count = 0;
		for (int i = 1; i <= min; i++) {
			int d = m[0] % i;
			int dem = 0;
			for (int j = 1; j < n; j++) {
				if (m[j] % i != d)
					break;
				else dem++;
			}
			if (dem == n - 1)count ++;
		}
		if (s == 0)
			cout << 0 << endl;
		else
		cout << count << endl;
	}
}
