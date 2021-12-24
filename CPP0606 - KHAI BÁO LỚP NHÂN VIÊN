#include<iostream>
#include<string>
using namespace std;
class NhanVien {
private:
    string a, b, c, d, e, f,g;
public:
    NhanVien() {
        a = b = c = d = e = f = "";
    }
    friend istream& operator>>(istream&, NhanVien&);
    friend ostream& operator<<(ostream&, NhanVien);
};
istream& operator>>(istream&mycin, NhanVien& x) {
    x.a = "00001";
    getline(mycin, x.b);
    getline(mycin, x.c);
    getline(mycin, x.d);
    getline(mycin, x.e);
    getline(mycin, x.f);
    getline(mycin, x.g);
    return mycin;
}
ostream& operator<<(ostream&mycout, NhanVien x){
   
    mycout << x.a << " " << x.b << " " << x.c << " " << x.d << " " << x.e << " " << x.f << " " << x.g;
    return mycout;
}
#define a() a
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
