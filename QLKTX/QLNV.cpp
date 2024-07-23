#include <iostream>
#include <string.h>
#include "QLNV.h"
using namespace std;

NV::NV() {
	manv = new char[7];
	tennv = new char[50];
	diachi = new char[50];
	sdt = new char[12];
}
void NV::XoaEndl2(char c[]) {
	size_t len = strlen(c);
	if (c[len - 1] == '\n')
		c[len - 1] = '\0';
}
void NV::NhapNV() {
	manv = new char[7];
	tennv = new char[50];
	diachi = new char[50];
	sdt = new char[12];
	cout << "Nhap ma so nhan vien: "; fflush(stdin); fgets(manv, 7, stdin);
	NV::XoaEndl2(manv);
	cout << "Nhap ten nhan vien: ";  fflush(stdin); fgets(tennv, 50, stdin);
	NV::XoaEndl2(tennv);
	cout << "Nhap dia chi: "; fflush(stdin); fgets(diachi, 50, stdin);
	NV::XoaEndl2(diachi);
	cout << "Nhap sdt: "; fflush(stdin); fgets(sdt, 12, stdin);
	NV::XoaEndl2(sdt);
}
char* NV::get_manv() {
	return manv;
}
char* NV::get_tennv() {
	return tennv;
}
char* NV::get_diachi() {
	return diachi;
}
char* NV::get_sdt() {
	return sdt;
}
void NV::InNV() {
	//cout << "---MSNV---|-------Ho Ten-------|--Dia Chi--|----SDT----\n";
	cout << NV::get_manv() << "\t\t" << NV::get_tennv() << "\t" << NV::get_diachi() << "\t" << NV::get_sdt() << endl;
}
/*NV::~NV() {
	delete[]manv;
	delete[]tennv;
	delete[]diachi;
	delete[]sdt;
}*/