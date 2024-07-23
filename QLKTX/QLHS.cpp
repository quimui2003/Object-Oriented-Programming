#include <iostream>
#include <string.h>
#include "QLHS.h"
#include "QLSV.h"
using namespace std;

HoSo::HoSo() {
	mahs = new char[7];
	mssv = new char[11];
	ten = new char[50];
	ngay = 0;
	thang = 0;
	nam = 0;
}
void HoSo::XoaEndl3(char d[]) {
	size_t len = strlen(d);
	if (d[len - 1] == '\n')
		d[len - 1] = '\0';
}
void HoSo::NhapHS() {
	mahs = new char[7];
	mssv = new char[11];
	ten = new char[50];
	cout << "Nhap ma ho so: "; fflush(stdin); fgets(mahs, 7, stdin);
	HoSo::XoaEndl3(mahs);
	cout << "Nhap ma so sinh vien: "; fflush(stdin); fgets(mssv, 11, stdin);
	HoSo::XoaEndl3(mssv);
	cout << "Nhap ten sinh vien: "; fflush(stdin); fgets(ten, 50, stdin);
	HoSo::XoaEndl3(ten);
	cout << "\n\t---Thoi gian dang ky---" << endl;
	cout << "Nhap ngay: "; cin >> ngay; cin.ignore();
	cout << "Nhap thang: "; cin >> thang; cin.ignore();
	cout << "Nhap nam: "; cin >> nam; cin.ignore();
}
char* HoSo::get_mahs() {
	return mahs;
}
char* HoSo::get_ten() {
	return ten;
}
char* HoSo::get_mssv() {
	return mssv;
}
int HoSo::get_ngay() {
	return ngay;
}
int HoSo::get_thang() {
	return thang;
}
int HoSo::get_nam() {
	return nam;
}
void HoSo::InHS() {
	//cout << "-Ma ho so-|-------Ho Ten-------|----MSNV----|--Ngay dang ky--\n";
	cout << HoSo::get_mahs() << "\t\t" << HoSo::get_ten() << "\t" << HoSo::get_mssv() << "\t" << HoSo::get_ngay() << "/" << HoSo::get_thang() << "/" << HoSo::get_nam() << endl;
}
/*HoSo::~HoSo() {
	delete[]mahs;
}*/