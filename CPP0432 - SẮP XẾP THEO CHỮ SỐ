#include<iostream>
#include<vector>
#include<algorithm>
#include<stdbool.h>
using namespace std;
bool cmp(string x,string y) {
	string xy = x.append(y);
	string yx = y.append(x);
	if (xy > yx)return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		vector<string> s(n);
		for (int i = 0; i < n; i++)cin >> s[i];
		sort(s.begin(), s.end(), cmp);
		for (int i = 0; i < n; i++)cout << s[i];
		cout << endl;
	}
}
