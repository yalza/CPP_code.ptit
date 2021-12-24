#include<iostream>;
#include<string>
using namespace std;
int sum(int n) {
	int x = 0; while (n) {
		x += n % 10;
		n /= 10;
	}
	return x;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		while (1) {
			n = sum(n);
			if (n < 10) {
				cout << n<<endl;
				break;
			}
		}
	}

}
