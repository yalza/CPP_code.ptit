#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> A(n),B(n);
		for (int i = 0; i < n; i++)cin >> A[i];
		sort(A.begin(), A.end());
		int a = 0;
		for (int i = 0; i < n; i++){
			if (i % 2 == 0)B[i] = A[a++];
		}
		for (int i = 0; i < n; i++) {
			if (i % 2 == 1)B[i] = A[a++];
		}
		
		for (int i = 0; i < n; i++)cout << B[i] << " ";
		cout << endl;
	}
}
