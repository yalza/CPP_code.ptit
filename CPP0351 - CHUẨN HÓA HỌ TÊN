#include<iostream>
#include<string>
#include<string.h>
using namespace std;;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		getchar(); string s; getline(cin , s);
		char M[100] = "";
		for (int j = 0; j < s.length(); j++)M[j] = s[j];
		char* p = strtok(M, " ");
		char N[100][100]; int g = 0;
		while (p != NULL) {
			strcpy(N[g++], p);
			p = strtok(NULL, " ");
		}
		if (n == 1) {
			for (int i = 0; i < strlen(N[g - 1]); i++) {
				if (i == 0)cout <<(char) toupper(N[g - 1][i]);
				else cout <<(char) tolower(N[g - 1][i]);
			}
			cout << " ";
			for (int j = 0; j < g - 1; j++) {
				for (int i = 0; i < strlen(N[j]); i++) {
					if (i == 0)cout <<(char) toupper(N[j][i]);
					else cout <<(char) tolower(N[j][i]);
				}
				cout << " ";
			}
		}
		else {
			
			for (int j = 1; j < g; j++) {
				for (int i = 0; i < strlen(N[j]); i++) {
					if (i == 0)cout <<(char) toupper(N[j][i]);
					else cout <<(char) tolower(N[j][i]);
				}
				cout << " ";
				
			}
			for (int i = 0; i < strlen(N[0]); i++) {
				if (i == 0)cout <<(char) toupper(N[0][i]);
				else cout <<(char) tolower(N[0][i]);
			}
			cout << " ";
		}
		cout<<endl;
	}
}
