#pragma once
#include <iostream>
using namespace std;
class NV {
private:
	char* manv;
	char* tennv;
	char* diachi;
	char* sdt;
public:
	NV();
	void XoaEndl2(char[]);
	void NhapNV();
	void InNV();
	char* get_manv();
	char* get_tennv();
	char* get_diachi();
	char* get_sdt();
	//~NV();
};