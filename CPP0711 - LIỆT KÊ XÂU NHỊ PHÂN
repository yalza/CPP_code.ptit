#include<iostream>
#include<stdbool.h>
bool x;
using namespace std;
typedef long long int ll;
void sinh(int*M,int n) {
	int a = 0;
	for (int i = n; i >= 1; i--) {
		if (M[i] == 0) {
			M[i] = 1; a = 1;
			for (int j = i + 1; j <= n; j++)M[j] = 0;
			break;
		}
	}
	if (a == 0)x = true;
}
void printf(int* M, int n) {
	for (int i = 1; i <= n; i++)
		cout << M[i]; cout << " ";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000] = { 0 };
		x = false;
		while (!x) {
			printf(M, n);
			sinh(M, n);
		}
		cout << endl;
	}
}
