#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int coun=0;
class SinhVien {
private:
    string a, b, c, d;
    float e;
public:
    SinhVien() {
        a = b = c = d  = "";
        e = 0;
    }
    friend istream& operator>>(istream&, SinhVien&);
    friend ostream& operator<<(ostream&, SinhVien);
};
istream& operator>>(istream& mycin, SinhVien& x) {
    coun++;
    x.a = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    cin.ignore();
    getline(mycin, x.b);
    getline(mycin, x.c);
    getline(mycin, x.d);
    cin >> x.e;
    if (x.d[1] == '/')x.d.insert(0, "0");
    if (x.d[4] == '/')x.d.insert(3, "0"); 
    return mycin;
}
ostream& operator<<(ostream& mycout, SinhVien x) {

    mycout << x.a << " " << x.b << " " << x.c << " " << x.d << " " <<fixed<<setprecision(2)<< x.e << endl;
    return mycout;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
