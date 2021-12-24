#include<iostream>
#include<stdbool.h>
#include<string>
#include<algorithm>
using namespace std;
struct X {
	string s;
	int x;
};
bool cmp(X a, X b) {
	if (a.x > b.x)return true;
	return false;
}
int main() {
	int n; cin >> n;
	X M[100000];
	for (int i = 0; i < n; i++) {
		cin >> M[i].s;
		M[i].x = M[i].s.length();
	}

	sort(M, M + n, cmp);
	int count = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (M[i].s == M[j].s)count += 2;
			else if (M[i].s.find(M[j].s) != -1) {
				count++;
			}
		}
	}
	cout << count << endl;
}
