#include <iostream>
#include <string.h>
#include "DSHS.h"
#include "QLHS.h"
using namespace std;

void DSHS::KhoiTao() {
	cout << "Nhap so luong ho so: "; cin >> soluong; cin.ignore();
	ds = new HoSo[soluong];
	int sl = soluong;
}
void DSHS::NhapDS() {
	cout << "\t----Thong tin ho so----" << endl;
	for (int i = 1; i <= soluong; i++) {
		cout << "Ho so thu " << i << endl;
		ds[i].NhapHS();
	}
}
void DSHS::InDS() {
	cout << "\t----Danh sach ho so----" << endl;
	cout << "-Ma ho so-|-------Ho Ten-------|----MSNV----|--Ngay dang ky--\n";
	for (int i = 1; i <= soluong; i++) {
		ds[i].InHS();
	}
}
void DSHS::TimKiem(char* ma) {
	int found = 0;
	cout << "\t----Tim ho so----" << endl;
	cout << "-Ma ho so-|-------Ho Ten-------|----MSNV----|--Ngay dang ky--\n";
	for (int i = 1; i <= soluong; i++) {
		if (strcmp(ma, ds[i].get_mahs()) == 0) {
			found = 1;
			ds[i].InHS();
		}
	}
	if (found == 0) {
		cout << "Khong tim thay ma ho so: " << ma << " !!!" << endl;
	}
}
void DSHS::Them() {
	soluong++;
	cout << "\t----Them ho so----" << endl;
	ds[soluong].NhapHS();
}
void DSHS::SapXep() {
	HoSo m;
	for (int i = 1; i <= soluong; i++) {
		for (int j = i + 1; j <= soluong; j++) {
			if (strcmp(ds[i].get_mahs(), ds[j].get_mahs()) > 0) {
				m = ds[i];
				ds[i] = ds[j];
				ds[j] = m;
			}
		}
	}
}
int DSHS::get_SoLuong() {
	return soluong;
}