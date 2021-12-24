#include<iostream>
#include<stdbool.h>
using namespace std;
bool x = false;

void sinh(int* M,int n, int k) {
	int i = k;
	while (i > 0 && M[i] == n - k + i)i--;
	if (i <= 0)x = true;
	else {
		M[i]++;
		for (int j = i + 1; j <= k; j++)M[j] = M[j - 1] + 1;
	}
	
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[1000];
		x = false;
		for (int i = 1; i <= k; i++)M[i] = i;
		while (!x) {
			for (int i = 1; i <= k; i++)cout << M[i];
			cout << " ";
			sinh(M, n,k);
		}
		cout << endl;

	}
}
