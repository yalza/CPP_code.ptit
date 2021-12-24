#include<iostream>
#include<vector>
#include<map>
#include<fstream>
#include<set>
using namespace std;


int main() {
	int M[10000] = { 0 };
	fstream file;
	int n;
	file.open("DATA.in");
	while (file>>n) {
		M[n]++;
	}
	for (int i = 0; i < 1001; i++) {
		if (M[i]) {
			cout << i << " " << M[i] << endl;
		}
	}
}
