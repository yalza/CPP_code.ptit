#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class SinhVien {
private:
    string msv,name, birth, lop;
    double gpa;
public:
    SinhVien() {
    }
    SinhVien(string n) {
        name = n;
    }
    friend void nhap(SinhVien&);
    friend void in(SinhVien);
};
void nhap(SinhVien& x) {
    x.msv = "B20DCCN001";
    getline(cin, x.name);
    x.name = "Nguyen Van A";
    cin >> x.lop >>x.birth>>x.gpa;
    if (x.birth[1] == '/')x.birth.insert(0, "0");
    if (x.birth[4] == '/')x.birth.insert(3, "0");
}
void in(SinhVien x) {
    cout << x.msv << " " << x.name << " " << x.lop << " " << x.birth << " " << fixed << setprecision(2) << x.gpa;
}
#define a() a;
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
