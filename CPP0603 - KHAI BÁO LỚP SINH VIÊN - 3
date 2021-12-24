#include<iostream>
#include<string>
#include<string.h>
#include<sstream>
#include<iomanip>
using namespace std;
class SinhVien {
private:
    string msv, name, lop, birth;
    float gpa;
public:
    SinhVien() {
        msv = name = lop = birth = "";
        gpa = 0;
    }
    friend istream& operator>>(istream& mycin, SinhVien&);
    friend ostream& operator<<(ostream& mycout, SinhVien);
};
istream& operator>>(istream& mycin, SinhVien& x) {
    x.msv = "B20DCCN001";
    getline(mycin, x.name);
    string s = "";
    stringstream ss(x.name);
    string token;
    while (ss >> token) {
        s += toupper(token[0]);
        for (int i = 1; i < token.length(); i++)s += tolower(token[i]);
        s += " ";
    }
    s.erase(s.length() - 1);
    x.name = s;
    mycin >> x.lop >> x.birth >> x.gpa;
    if (x.birth[1] == '/')x.birth.insert(0, "0");
    if (x.birth[4] == '/')x.birth.insert(3, "0");
    return mycin;
}
ostream& operator<<(ostream& mycout, SinhVien x) {
    mycout << x.msv << " " << x.name << " " << x.lop << " " << x.birth << " " << fixed << setprecision(2) << x.gpa;
    return mycout;
}
#define a() a
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
