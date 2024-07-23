#pragma once
#include <iostream>
using namespace std;
class HoSo {
private:
	char* mahs;
	char* mssv;
	char* ten;
	int ngay;
	int thang;
	int nam;
public:
	HoSo();
	void XoaEndl3(char[]);
	void NhapHS();
	void InHS();
	char* get_mahs();
	char* get_mssv();
	char* get_ten();
	int get_ngay();
	int get_thang();
	int get_nam();
	//~HoSo();
};