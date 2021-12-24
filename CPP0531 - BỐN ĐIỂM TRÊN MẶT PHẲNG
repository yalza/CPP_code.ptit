#include<iostream>
using namespace std;
struct TD {
	int x, y, z;
};
int main() {
	int t; cin >> t;
	while (t--) {
		TD A, B, C, D;
		cin >> A.x >> A.y >> A.z >> B.x >> B.y >> B.z >> C.x >> C.y >> C.z >> D.x >> D.y >> D.z;
			
		TD ab; ab.x = B.x - A.x, ab.y = B.y - A.y, ab.z = B.z - A.z;
		TD ac; ac.x = C.x - A.x, ac.y = C.y - A.y, ac.z = C.z - A.z;
		TD CP; CP.x = ab.y * ac.z - ab.z * ac.y; CP.y = ab.z * ac.x - ab.x * ac.z; CP.z = ab.x * ac.y - ab.y * ac.x;
		if (CP.x * (D.x - A.x) + CP.y * (D.y - A.y) + CP.z * (D.z - A.z) == 0)
			cout << "YES\n";
		else cout << "NO\n";
	}
}
