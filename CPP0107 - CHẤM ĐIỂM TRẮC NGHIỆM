#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int a; cin >> a;
		string s,x;
		getline(cin,s);
		if (a == 101) {
			 x=("A,B,B,A,D,C,C,A,B,D,C,C,A,B,D");
		}else
			 x=("A,C,C,A,B,C,D,D,B,B,C,D,D,B,B");
		float count = 0;
		for (int i = 0; i < s.length()-1; i += 2)
			if (s.at(i+1) == x.at(i))
				count+=10*1.0/15;
		cout << setprecision(2) << fixed << count << endl;
	}
}
