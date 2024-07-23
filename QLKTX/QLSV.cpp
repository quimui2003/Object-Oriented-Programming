#include <iostream>
#include <string.h>
#include "QLSV.h"
using namespace std;

SV::SV() {
	masv = new char[11];
	tensv = new char[50];
	lop = new char[20];
	khoa = new char[50];
}
void SV::XoaEndl1(char b[]) {
	size_t len = strlen(b);
	if (b[len - 1] == '\n')
		b[len - 1] = '\0';
}
void SV::NhapSV() {
	masv = new char[11];
	tensv = new char[50];
	lop = new char[20];
	khoa = new char[50];
	cout << "Nhap ma so sinh vien: ";  fflush(stdin); fgets(masv, 11, stdin);
	SV::XoaEndl1(masv);
	cout << "Nhap ten sinh vien: "; fflush(stdin); fgets(tensv, 50, stdin);
	SV::XoaEndl1(tensv);
	cout << "Nhap lop: "; fflush(stdin); fgets(lop, 20, stdin);
	SV::XoaEndl1(lop);
	cout << "Nhap khoa: "; fflush(stdin); fgets(khoa, 50, stdin);
	SV::XoaEndl1(khoa);
}
char* SV::get_masv() {
	return masv;
}
char* SV::get_tensv() {
	return tensv;
}
char* SV::get_lop() {
	return lop;
}
char* SV::get_khoa() {
	return khoa;
}
void SV::InSV() {
	//cout << "---MSSV---|-------Ho Ten-------|----Lop----|---Khoa---\n";
	cout << SV::get_masv() << "\t" << SV::get_tensv() << "\t" << SV::get_lop() << "\t\t" << SV::get_khoa() << endl;
}
/*SV::~SV() {
	delete[]masv;
	delete[]tensv;
	delete[]lop;
	delete[]khoa;
}*/