#pragma once
#include <iostream>
#include "QLPhong.h"
using namespace std;
class DSPhong {
private:
	Phong* ds;
	int soluong;
public:
	void KhoiTaoDS();
	void NhapDS();
	void InDS();
	void TimKiem(char*);
	void Them();
	void SapXep();
};