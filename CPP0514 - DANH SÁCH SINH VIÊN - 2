#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void yt(string name) {
	int a = name.find_last_of(" ");
	string s = name.substr(a + 1, 100);
	name.erase(a, 100);
	int y = 0;
	for (int i = 0; i < name.length(); i++) {
		y++; if (name.at(i) != ' ')break;
	}
	for (int i = y - 1; i < name.length() - 1; i++) {
		if (name.at(i) == ' ' && name.at(i + 1) == ' ')
			continue;
		if (i == 0 || name.at(i - 1) == ' ') {
			name.at(i) = toupper(name.at(i)); cout << name.at(i);
		}
		else {
			name.at(i) = tolower(name.at(i)); cout << name.at(i);
		}
	}
	if (name.at(name.length() - 1) != ' ') {
		name.at(name.length() - 1) = tolower(name.at(name.length() - 1));
		cout << name.at(name.length() - 1);
	}
	cout << " ";
	for (int i = 0; i < s.length(); i++) {
        if (i == 0)
        {
            s.at(i) = toupper(s.at(i)); cout << s.at(i);
        }
        else { s.at(i) = tolower(s.at(i)); cout << s.at(i); }

	}
}
struct SinhVien {
    string a, b, c;
    float d;
};
void input(SinhVien& A) {
    getline(cin, A.a);
    getline(cin, A.b);
    getline(cin, A.c);
    cin >> A.d;
    getchar();
}
void nhap(SinhVien ds[], int n) {
    getchar();
    for (int i = 0; i < n; i++) {
        input(ds[i]);
    }
}
void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        if (ds[i].c[1] == '/')
            ds[i].c.insert(0, "0");
        if (ds[i].c[4] == '/')
            ds[i].c.insert(3, "0");
        string s;
        if (i < 9)s = "B20DCCN00";
        else s = "B20DCCN0";
        cout << s << i + 1 << " "; 
        yt(ds[i].a);
        cout << " " << ds[i].b << " " << ds[i].c << " " << fixed << setprecision(2) << ds[i].d << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
