#include<iostream>
using namespace std;
int matrix(int M[][100],int n) {
	int A[100] = { 0 }, B[100] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i] += M[i][j];
			B[j] += M[i][j];
		}
	}
	int summax = 0;
	for (int i = 0; i < n; i++)
		if (A[i] > summax)summax = A[i];
	for (int i = 0; i < n; i++)
		if (B[i] > summax)summax = B[i];
	int sum = 0;
	for (int i = 0, j = 0; i < n&& j < n;) {
		int a = max(summax - A[i], summax - B[j]);
		A[i] += a; B[j] += a;
		sum += a;
		if (A[i] == summax)i++;
		if (B[j] == summax)j++;
	}
	return sum;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100][100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		cout << matrix(M, n) << endl;;
	}
}
