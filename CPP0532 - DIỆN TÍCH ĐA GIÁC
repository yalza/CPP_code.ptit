#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct toado {
	int x, y;
};
double S(int a,int b,int c,int d,int e,int f) {
	double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
	double y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
	double z = sqrt((e - a) * (e - a) + (f - b) * (f - b));
	double s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) * 1.0 / 4;
	return s;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		struct toado M[1000];
		for (int i = 0; i < n; i++)cin >> M[i].x >> M[i].y;
		double s = 0;
		for (int i = 1; i < n - 1; i++) {
			s += S(M[0].x, M[0].y, M[i].x, M[i].y, M[i + 1].x, M[i + 1].y);
		}
		cout << fixed << setprecision(3) << s << endl;
	}
}
