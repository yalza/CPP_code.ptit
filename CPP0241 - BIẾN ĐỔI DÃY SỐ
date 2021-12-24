#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		int l = 0, r = n - 1;
		int count = 0;
		while (l <= r) {
			if (M[l] == M[r]) {
				l++; r -- ;
			}
			else if (M[l] < M[r]) {
				l++; M[l] += M[l-1];
				count++;
			}
			else {
				r--; M[r] += M[r + 1];
				count++;
			}
		}
		cout << count << endl;
	}
}
