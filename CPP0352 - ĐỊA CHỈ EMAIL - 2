#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	getchar();
	string s[100];
	for (int i = 0; i < t; i++) {
		getline(cin, s[i]);
		char M[100] = "";
		for (int j = 0; j < s[i].length(); j++)M[j] = s[i][j];
		char* p = strtok(M, " ");
		char N[100][100]; int g = 0;
		while (p != NULL) {
			strcpy(N[g++], p);
			p = strtok(NULL, " ");
		}
		s[i].clear();
		for (int j = 0; j < strlen(N[g - 1]); j++)s[i].push_back(tolower(N[g - 1][j]));
		for (int j = 0; j < g - 1; j++)s[i].push_back(tolower(N[j][0]));
		int y = 0;
		for (int j = 0; j < i; j++) {
			if (s[i] == s[j])y++;
		}
		cout << s[i];
		if (y >= 1)cout << y + 1;
		cout << "@ptit.edu.vn\n";
	}
}
