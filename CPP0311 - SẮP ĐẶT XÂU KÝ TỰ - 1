#include<iostream>
#include<string>
#include<vector>;
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		vector<int> m(200);
		for (int i = 0; i < 200; i++)m[i] = 0;
		for (int i = 0; i < s.length(); i++) {
			m[s[i]]++;
		}
		int max = 0;
		for (int i = 'a'; i <= 'z'; i++)
			if (m[i] > max)max = m[i];
		if (s.length() % 2 == 1) {
			if (max > s.length() / 2 + 1)
				cout << 0 << endl;
			else cout << 1 << endl;
		}
		else {
			if (max > s.length() / 2)
				cout << 0 << endl;
			else cout << 1 << endl;
		}
	}
}
