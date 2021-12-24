#include<iostream>
#include<string>
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
