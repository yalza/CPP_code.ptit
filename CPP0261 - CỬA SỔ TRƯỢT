#include<iostream>
using namespace std;
int main() {
	
		int a; cin >> a;
		int M[100][100];
		for (int i = 0; i < a; i++)
			for (int j = 0; j < a; j++)
				cin >> M[i][j];

		int b; cin >> b;
		int N[100][100];
		for (int i = 0; i < b; i++)
			for (int j = 0; j < b; j++)
				cin >> N[i][j];
		for (int i = 0; i < a; i+=b) {
			for (int j = 0; j < a; j += b) {
				for (int l = 0; l < b; l++) {
					for (int k = 0; k < b; k++) {
						M[i + l][j + k] *= N[l][k];
					}
				}
			}
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
				cout << M[i][j]<<" ";
			cout << endl;
		}
	
}
