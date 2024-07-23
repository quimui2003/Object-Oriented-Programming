#pragma once
#include <iostream>
#include "QLSV.h"
using namespace std;
class DSSV {
private:
	SV* ds;
	int soluong;
public:
	void KhoiTao();
	void NhapDS();
	void InDS();
	void TimKiem(char*);
	void Them();
	void SapXep();
};