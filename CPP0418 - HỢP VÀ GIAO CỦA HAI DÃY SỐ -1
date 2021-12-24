#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define X 1000000
int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		vector<int> m(a),n(b);
		int max = -1000000;
		for (int i = 0; i < a; i++) {
			cin >> m[i];
			m[i] += X;
			if (m[i] > max)max = m[i];
		}
		for (int i = 0; i < b; i++) {
			cin >> n[i];n[i]+= X;
			if (n[i] > max)max = n[i];
		}
		
		vector<int> v(max + 1),x(max+1);
		for (int i = 0; i <= max; i++) {
			v[i] = 0; x[i] = 0;
		}
		for (int i = 0; i < a; i++)v[m[i]]++;
		for (int i = 0; i < b; i++)x[n[i]]++;
		for (int i = 0; i <= max; i++)
			if (v[i] > 0 || x[i] > 0)cout << i-X << " ";
		cout << endl;
		for (int i = 0; i <= max; i++)
			if (v[i] > 0 && x[i] > 0)cout << i-X << " ";
		cout << endl;
	}
}
