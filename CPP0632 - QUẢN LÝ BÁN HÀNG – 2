#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>
using namespace std;
int a = 0, b = 0, c = 0;
class KH {
public:
	string mkh, tkh, gt, ns, dc;
	KH() {
		mkh = "";
		tkh = gt = ns = dc = "";
	}
};
class MH {
public:
	string mmh, tmh, dvt;
	int gm, gb;
	MH() {
		mmh = "MH";
		tmh = dvt = "";
		gb = gm = 0;
	}
};
KH kh[35];
MH mh[55];
class KhachHang {
public:
	string mkh, tkh, gt, ns, dc;
	KhachHang() {
		mkh = "KH";
		tkh = gt = ns = dc = "";
	}
	friend istream& operator>>(istream& is, KhachHang& X) {
		if (a == 0)cin.ignore();
		a++;
		X.mkh += (string(3 - to_string(a).length(), '0') + to_string(a));
		getline(is, X.tkh);
		kh[a - 1].mkh = X.mkh;
		getline(is, X.gt);
		getline(is, X.ns);
		getline(is, X.dc);
		kh[a - 1].tkh = X.tkh;
		kh[a - 1].dc = X.dc;
		return is;
	}
};
class MatHang {

public:
	string mmh, tmh, dvt;
	long long int gm, gb;
	MatHang() {
		mmh = "MH";
		tmh = dvt = "";
		gb = gm = 0;
	}
	friend istream& operator>>(istream& is, MatHang& X) {
		b++;
		X.mmh += (string(3 - to_string(b).length(), '0') + to_string(b));
		cin.ignore();
		getline(is, X.tmh);
		getline(is, X.dvt);
		cin >> X.gm >> X.gb;
		mh[b - 1].mmh = X.mmh;
		mh[b - 1].tmh = X.tmh;
		mh[b - 1].gb = X.gb;
		mh[b - 1].dvt = X.dvt;
		mh[b - 1].gm = X.gm;
		return is;
	}
};
class HD {
public:
	string tkh,mhd, dc, tmh, dvt;
	long long int gm, gb, sl, ln,xx;
	string mkh,mmh;
};
HD hd[1000];
int d = 0;
class HoaDon {
private:

public:
	string mkh, mmh;
	long long int sl;
	string mhd;
	HoaDon() {
		mhd = "HD";
		mkh = mmh = "";
		sl = 0;
	}
	friend istream& operator>>(istream& is, HoaDon& X) {
		c++;
		X.mhd += (string(3 - to_string(c).length(), '0') + to_string(c));
		hd[c - 1].mhd = X.mhd;
		cin >> X.mkh >> X.mmh >> X.sl;
		hd[c - 1].mkh = X.mkh;
		hd[c - 1].mmh = X.mmh;
		hd[c - 1].sl = X.sl;
		return is;
	}
	friend ostream& operator<<(ostream& os, HoaDon X) {
		cout << hd[d].mhd << " " << hd[d].tkh << " " << hd[d].dc << " " << hd[d].tmh << " " << hd[d].sl << " " << hd[d].xx << " " << hd[d].ln << endl;
		d++;
		return os;
	}
};
void XXX(KH* kh, MH* mh, HD* hd,int a,int b,int c) {
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < a; j++) {
			if (hd[i].mkh == kh[j].mkh) {
				hd[i].tkh = kh[j].tkh;
				hd[i].dc = kh[j].dc;
			}
			int x = 0;
			for (int j = 0; j < b; j++) {
				if (hd[i].mmh == mh[j].mmh) {
					x = j;
					hd[i].tmh = mh[j].tmh;
					hd[i].dvt = mh[j].dvt;
				}
			}
			hd[i].xx = hd[i].sl * mh[x].gb;
			hd[i].ln = hd[i].sl * (mh[x].gb-mh[x].gm);
		}
		
	}
}
bool cmp(HD A, HD B) {
	if (A.ln >= B.ln)return true;
	return false;
}
void ssx(HD* hd, int c) {
	sort(hd, hd + c, cmp);
}
void sapxep(HoaDon*A,int k) {
	XXX(kh, mh, hd, a, b, c);
	ssx(hd, c);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
