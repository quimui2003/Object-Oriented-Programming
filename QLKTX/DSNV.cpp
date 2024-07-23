#include <iostream>
#include <string.h>
#include "DSNV.h"
#include "QLNV.h"
using namespace std;

void DSNV::KhoiTao() {
	cout << "Nhap so luong nhan vien: "; cin >> soluong; cin.ignore();
	ds = new NV[soluong];
	int sl = soluong;
}
void DSNV::NhapDS() {
	cout << "\t----Thong tin nhan vien----" << endl;
	for (int i = 1; i <= soluong; i++) {
		cout << "Nhan vien thu " << i << endl;
		ds[i].NhapNV();
	}
}
void DSNV::InDS() {
	cout << "\t----Danh sach nhan vien----" << endl;
	cout << "---MSNV---|-------Ho Ten-------|--Dia Chi--|----SDT----\n";
	for (int i = 1; i <= soluong; i++) {
		ds[i].InNV();
	}
}
void DSNV::TimKiem(char* ma) {
	int found = 0;
	cout << "\t----Tim nhan vien----" << endl;
	cout << "---MSNV---|-------Ho Ten-------|--Dia Chi--|----SDT----\n";
	for (int i = 1; i <= soluong; i++) {
		if (strcmp(ma, ds[i].get_manv()) == 0) {
			found = 1;
			ds[i].InNV();
		}
	}
	if (found == 0) {
		cout << "Khong tim thay manv " << ma << " !!!" << endl;
	}
}
void DSNV::Them() {
	soluong++;
	cout << "\t----Them nhan vien----" << endl;
	ds[soluong].NhapNV();
}
void DSNV::SapXep() {
	NV m;
	for (int i = 1; i <= soluong; i++) {
		for (int j = i + 1; j <= soluong; j++) {
			if (strcmp(ds[i].get_manv(), ds[j].get_manv()) > 0) {
				m = ds[i];
				ds[i] = ds[j];
				ds[j] = m;
			}
		}
	}
}