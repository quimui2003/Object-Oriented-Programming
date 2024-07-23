#pragma once
#include <iostream>
#include "QLNV.h"
using namespace std;
class DSNV {
private:
	NV* ds;
	int soluong;
public:
	void KhoiTao();
	void NhapDS();
	void InDS();
	void TimKiem(char*);
	void Them();
	void SapXep();
};