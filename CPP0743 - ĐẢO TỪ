#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t; cin >> t;
	getchar();
	while (t--) {
		string s;
		getline(cin, s);
		while (1) {
			if (s.find_first_of(" ") == s.find_last_of(" ")) {
				break;
			}
			 int p = s.find_last_of(" ");
			cout << s.substr(p + 1, 100) << " ";
			s.erase(p, 100);
			
		}
		int p = s.find_last_of(" ");
		cout << s.substr(p + 1, 100) << " ";
		s.erase(p, 100);
		cout << s << endl;
	}
}
