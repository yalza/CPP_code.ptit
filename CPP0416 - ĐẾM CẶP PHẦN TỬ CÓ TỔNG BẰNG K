#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n>> k;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		int count = 0;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (m[i] + m[j] == k)count++;
		cout << count << endl;
	}
}
