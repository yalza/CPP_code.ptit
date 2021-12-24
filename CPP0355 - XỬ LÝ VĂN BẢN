#include<iostream>
#include<string>
using namespace std;
int main() {
	string M[1000];
	char N[1000];
	int a = 0;
	while (scanf("%s",&N)!=EOF) {
		M[a++] = N;
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < M[i].length(); j++)
		{
			M[i][j] = tolower(M[i][j]);
			if (M[i][j] == '.' || M[i][j] == '?' || M[i][j] == '!')
				M[i][j] = '\n';
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < M[i].length(); j++) {
			if (i == 0 || M[i - 1][M[i - 1].length() - 1] == '\n')
				M[i][0] = toupper(M[i][0]);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < M[i].length(); j++) {
			cout << M[i][j];
		}
		if(M[i+1][0]<'A'||M[i+1][0]>'Z')
		cout << " ";
	}
}
