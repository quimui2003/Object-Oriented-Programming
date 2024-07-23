#pragma once
#include <iostream>
using namespace std;
class SV {
private:
	char* masv;
	char* tensv;
	char* lop;
	char* khoa;
public:
	SV();
	void XoaEndl1(char[]);
	void NhapSV();
	void InSV();
	char* get_masv();
	char* get_tensv();
	char* get_lop();
	char* get_khoa();
	//~SV();
};