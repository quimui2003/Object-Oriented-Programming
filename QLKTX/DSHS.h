#pragma once
#include <iostream>
#include "QLHS.h"
using namespace std;
class DSHS {
private:
	HoSo* ds;
	int soluong;
public:
	void KhoiTao();
	void NhapDS();
	void InDS();
	void TimKiem(char*);
	void Them();
	void SapXep();
	int get_SoLuong();
};