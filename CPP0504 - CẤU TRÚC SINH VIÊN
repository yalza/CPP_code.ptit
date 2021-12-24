#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct SinhVien {
    string a, b, c;
    float d;
};
void nhap(SinhVien& A) {
    getline(cin, A.a);
    getline(cin, A.b);
    getline(cin, A.c);
    cin >> A.d;
}
void in(SinhVien A) {
    if (A.c[1] == '/')
        A.c.insert(0, "0");
    if (A.c[4] == '/')
        A.c.insert(3, "0");
   
    cout << "B20DCCN001 " << A.a << " " << A.b << " " << A.c << " " << fixed << setprecision(2) << A.d;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
