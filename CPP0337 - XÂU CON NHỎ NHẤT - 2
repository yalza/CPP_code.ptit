#include<iostream>
#include<string>
using namespace std;
int test(string a, string b) {
	int M[1000] = { 0 };
	int count = 0, x = 0;
	int min = 1000000000;
	for (int i = 0; i < b.length(); i++) {
		if (M[b[i]] == 0)
			count++;
		M[b[i]]++;
	}
	int j = 0;
	for (int i = 0; i < a.length(); i++) {
		M[a[i]]--;
		if (M[a[i]] == 0)count--;
		if (count == 0)
			while (count == 0) {
				if (min > i - j + 1) {
					min = i - j + 1;
					x = j;
				}
				M[a[j]]++;
				if (M[a[j]] > 0)count++;
				j++;
			}
	}
	return min;
}

int main() {
	int t; cin >> t;
	while (t--) {
		string a,b="";
		cin >> a;
		int M[1000] = { 0 };
		for (int i = 0; i < a.length(); i++)M[a[i]]++;
		for (int i = 0; i <= 256; i++)if (M[i] > 0)b.push_back((char)i);
		cout << test(a, b) << endl;
	}
}
