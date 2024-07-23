#include <iostream>
#include <string.h>
#include "QLPhong.h"
using namespace std;

Phong::Phong() {
	maphong = new char[10];
	giaphong = 0;
	dango = 0;
	toida = 0;
}
void Phong::XoaEndl(char a[]) {
	size_t len = strlen(a);
	if (a[len - 1] == '\n')
		a[len - 1] = '\0';
}
void Phong::NhapPhong() {
	maphong = new char[10];
	cout << "Nhap ma phong: "; fflush(stdin); fgets(maphong, 7, stdin);
	Phong::XoaEndl(maphong);
	cout << "Nhap gia phong: "; cin >> giaphong; cin.ignore();
	cout << "Nhap so nguoi dang o: "; cin >> dango; cin.ignore();
	cout << "Nhap so nguoi o toi da: "; cin >> toida; cin.ignore();
}
char* Phong::get_maphong() {
	return maphong;
}
int Phong::get_giaphong() {
	return giaphong;
}
int Phong::get_dango() {
	return dango;
}
int Phong::get_toida() {
	return toida;
}
void Phong::InPhong() {
	//cout << "----Ma phong----|---Gia Phong---|So nguoi dang o|So nguoi toi da\n";
	cout << "\t" << Phong::get_maphong() << "\t|\t" << Phong::get_giaphong() << "\t|\t" << Phong::get_dango() << "\t|\t" << Phong::get_toida() << endl;
}
/*Phong::~Phong() {
	delete[]maphong;
}*/