#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct SinhVien {
    string msv = "N20DCCN001";
    string a, b, c;
    float d;
};
void nhapThongTinSV(SinhVien& A) {
    getline(cin, A.a);
    cin >> A.b >> A.c;
    cin >> A.d;
}
void inThongTinSV(SinhVien A) {
    if (A.c[1] == '/')
        A.c.insert(0, "0");
    if (A.c[4] == '/')
        A.c.insert(3, "0");
    cout << A.msv << " " << A.a << " " << A.b << " " << A.c << " " << fixed << setprecision(2) << A.d;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
