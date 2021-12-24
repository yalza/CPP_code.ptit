#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n; cin >> n;
		vector<int> m(1000);
		for (int i = 'a'; i <= 'z'; i++)
			m[i] = 0;
		for (int i = 0; i < s.length(); i++)
			m[s[i]]++;
		int count = 0;
		for (int i = 'a'; i <= 'z'; i++)
			if (m[i] > 0)count ++;
		if (26 - count <= n && s.length() >= 26)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}
