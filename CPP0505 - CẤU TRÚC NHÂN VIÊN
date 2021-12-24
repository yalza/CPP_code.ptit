#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct NhanVien {
    string a, b, c, d, e,f;
};
void nhap(NhanVien&A) {
    getline(cin, A.a);
    getline(cin, A.b);
    getline(cin, A.c);
    getline(cin, A.d);
    getline(cin, A.e);
    getline(cin, A.f);

}
void in(NhanVien A) {
    if (A.c[1] == '/')
        A.c.insert(0, "0");
    if (A.c[4] == '/')
        A.c.insert(3, "0");

        if (A.f[1] == '/')
            A.f.insert(0, "0");
    if (A.f[4] == '/')
        A.f.insert(3, "0");
    cout << "00001 " << A.a << " " << A.b << " " << A.c << " " << A.d << " "<<A.e << " " << A.f;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
