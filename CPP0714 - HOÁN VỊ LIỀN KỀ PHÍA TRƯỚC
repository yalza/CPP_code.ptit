#include<iostream>
#include<stdbool.h>
using namespace std;
bool x = false;
void sinh(int* M, int n) {
	int i = n - 2;
	while (i >= 0 && M[i] < M[i + 1])i--;
	if (i < 0)x = true;
	else {
		int k = n - 1;
		while (M[k] > M[i])k--;
		swap(M[k], M[i]);
		int l = i + 1, r = n - 1;
		while (l < r) {
			swap(M[l], M[r]); l++; r--;
		}
	}
}
int main(){
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000];
		x = false;
		for (int i = 0; i < n; i++)cin >> M[i];
		sinh(M, n);
		if (x == true)
			for (int i = n - 1; i >= 0; i--)cout << M[i] << " ";
		else
		for (int i = 0; i < n; i++)
			cout << M[i] << " ";
		cout << endl;
	}

}
