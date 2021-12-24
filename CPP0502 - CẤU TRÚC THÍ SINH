#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct ThiSinh {
    string name, date;
    float a, b, c;
};
void nhap(ThiSinh& A) {
    getline(cin, A.name);
    getline(cin, A.date);
    cin >> A.a >> A.b >> A.c;
}
void in(ThiSinh A) {
    cout << A.name << " " << A.date << " " << fixed << setprecision(1) << A.a + A.b + A.c;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
