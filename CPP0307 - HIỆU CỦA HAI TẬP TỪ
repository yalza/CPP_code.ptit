#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	getchar();
	while (t--) {
		string a, b;
		getline(cin, a);
		getline(cin, b);
		char M[1000] = "";
		for (int j = 0; j < a.length(); j++)M[j] = a[j];
		char* p = strtok(M, " ");
		char A[100][100]; int g = 0;
		while (p != NULL) {
			strcpy(A[g++], p);
			p = strtok(NULL, " ");
		}
		char N[1000] = "";
		for (int j = 0; j < b.length(); j++)N[j] = b[j];
		char* q = strtok(N, " ");
		char B[100][100]; int f = 0;
		while (q != NULL) {
			strcpy(B[f++], q);
			q = strtok(NULL, " ");
		}
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < g; j++) {
				if (strcmp(B[i], A[j]) == 0)
					strcpy(A[j], "");
			}
		}

		for (int i = 0; i < g - 1; i++) {
			for (int j = i + 1; j < g; j++) {
				if (strcmp(A[i], A[j]) > 0) {
					char G[100]; strcpy(G, A[i]);
					strcpy(A[i], A[j]);
					strcpy(A[j], G);
				}
			}
		}
		for (int i = 0; i < g; i++) {
			int j = 0;
			for (int y = 0; y < i; y++) {
				if (strcmp(A[i], A[y]) == 0)j++;
			}
			if (j > 0)continue;
			if (strcmp(A[i], "") != 0)cout << A[i] << " ";
		}
		cout << endl;
	}
}
