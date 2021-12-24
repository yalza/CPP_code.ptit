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
		for (int i = 0; i < s.length(); i++) {
			int dem = 0;
			for (int j = 0; j < s.length(); j++) {
				if (s[i] == s[j])
					dem++;
			}
			if (dem == 1)
				cout << s[i];
		}
		cout << endl;
	}
}


