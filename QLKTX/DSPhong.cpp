#include <iostream>
#include <string.h>
#include "DSPhong.h"
#include "QLPhong.h"
using namespace std;

void DSPhong::KhoiTaoDS() {
	cout << "Nhap so luong phong: "; cin >> soluong; cin.ignore();
	ds = new Phong[soluong];
	int sl = soluong;
}
void DSPhong::NhapDS() {
	cout << "\t----Thong tin phong----" << endl;
	for (int i = 1; i <= soluong; i++) {
		cout << "Phong thu " << i << endl;
		ds[i].NhapPhong();
	}
}
void DSPhong::InDS() {
	cout << "\t----Danh sach phong----" << endl;
	cout << "----Ma phong----|---Gia Phong---|So nguoi dang o|So nguoi toi da\n";
	for (int i = 1; i <= soluong; i++) {
		ds[i].InPhong();
	}
}
void DSPhong::TimKiem(char* ma) {
	int found = 0;
	cout << "\t----Tim phong----" << endl;
	cout << "----Ma phong----|---Gia Phong---|So nguoi dang o|So nguoi toi da\n";
	for (int i = 1; i <= soluong; i++) {
		if (strcmp(ma, ds[i].get_maphong()) == 0) {
			found = 1;
			ds[i].InPhong();
		}
	}
	if (found == 0) {
		cout << "Khong tim thay ma phong " << ma << " !!!" << endl;
	}
}
void DSPhong::Them() {
	soluong++;
	cout << "\t----Them phong----" << endl;
	ds[soluong].NhapPhong();
}
void DSPhong::SapXep() {
	Phong m;
	for (int i = 1; i <= soluong; i++) {
		for (int j = i + 1; j <= soluong; j++) {
			if (strcmp(ds[i].get_maphong(), ds[j].get_maphong()) > 0) {
				m = ds[i];
				ds[i] = ds[j];
				ds[j] = m;
			}
		}
	}
}