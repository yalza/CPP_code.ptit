#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
bool ok;
void sinh(int* A, int n) {
	int a = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (A[i]==0) {
			A[i] = 1;
			a = 1;
			for (int j = i + 1; j < n; j++)A[j] = 0;
			break;
		}
	}
	if (a == 0)ok = true;
}
int main() {
	int n, k; cin >> n >> k;
	p M[100];
	for (int i = 0; i < n; i++)cin >> M[i].first;
	for (int i = 0; i < n; i++)cin >> M[i].second;
	int A[100] = { 0 };
	int res = 0;
	vector<int> B;
	while (!ok) {
		int sum1 = 0, sum2 = 0;;
		for (int i = 0; i < n; i++) {
			if (A[i] == 1) {
				sum1 += M[i].second;
				sum2 += M[i].first;
			}
		}
		if (sum1 <= k) {
			if (res < sum2) {
				res = sum2;
				B.clear();
				for (int i = 0; i < n; i++)B.push_back(A[i]);
			}

		}
		sinh(A, n);
	}
	cout << res << endl;
	for (int j : B)cout << j << " ";
	cout << endl;
}
