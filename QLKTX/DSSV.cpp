#include <iostream>
#include <string.h>
#include "DSSV.h"
#include "QLSV.h"
using namespace std;

void DSSV::KhoiTao() {
	cout << "Nhap so luong sinh vien: "; cin >> soluong; cin.ignore();
	ds = new SV[soluong];
	int sl = soluong;
}
void DSSV::NhapDS() {
	cout << "\t----Thong tin sinh vien----" << endl;
	for (int i = 1; i <= soluong; i++) {
		cout << "Sinh vien thu " << i << endl;
		ds[i].NhapSV();
	}
}
void DSSV::InDS() {
	cout << "\t----Danh sach sinh vien----" << endl;
	cout << "---MSSV---|-------Ho Ten-------|----Lop----|---Khoa---\n";
	for (int i = 1; i <= soluong; i++) {
		ds[i].InSV();
	}
}
void DSSV::TimKiem(char* ma) {
	int found = 0;
	cout << "\t----Tim sinh vien----" << endl;
	cout << "---MSSV---|-------Ho Ten-------|----Lop----|---Khoa---\n";
	for (int i = 1; i <= soluong; i++) {
		if (strcmp(ma, ds[i].get_masv()) == 0) {
			found = 1;
			ds[i].InSV();
		}
	}
	if (found == 0) {
		cout << "Khong tim thay mssv " << ma << " !!!" << endl;
	}
}
void DSSV::Them() {
	soluong++;
	cout << "\t----Them sinh vien----" << endl;
	ds[soluong].NhapSV();
}
void DSSV::SapXep() {
	SV m;
	for (int i = 1; i <= soluong; i++) {
		for (int j = i + 1; j <= soluong; j++) {
			if (strcmp(ds[i].get_masv(), ds[j].get_masv()) > 0) {
				m = ds[i];
				ds[i] = ds[j];
				ds[j] = m;
			}
		}
	}
}