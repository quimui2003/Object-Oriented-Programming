#pragma once
#include <iostream>
using namespace std;

class Phong {
private:
	char* maphong;
	int giaphong;
	int dango;
	int toida;
public:
	Phong();
	void XoaEndl(char[]);
	void NhapPhong();
	void InPhong();
	char* get_maphong();
	int get_giaphong();
	int get_dango();
	int get_toida();
	//~Phong();
};