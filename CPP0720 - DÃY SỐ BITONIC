#include<iostream>
#include<vector>
using namespace std;
int test(vector<int> M, int n) {
	vector<int>  N(n,1);
	vector<int>  B(n, 1);
	for (int i = 1; i < n; i++) 
		for (int j = 0; j < i; j++) 
			if (M[i] > M[j])N[i] = max(N[i], N[j] + 1);
	for (int i = n-2; i >=0; i--) 
		for (int j = n-1; j > i; j--) 
			if (M[i] > M[j])B[i] = max(B[i], B[j] + 1);
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (N[i] + B[i]-1 >  max)max = N[i] + B[i] - 1;
	}
	return max;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++) cin >> M[i];
		cout <<  test(M, n) << endl;
	}
}
