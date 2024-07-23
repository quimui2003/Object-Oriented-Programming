#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include "DSPhong.h"
#include "DSSV.h"
#include "DSNV.h"
#include "DSHS.h"
#include "QLPhong.h"
#include "QLSV.h"
#include "QLNV.h"
#include "QLHS.h"
using namespace std;

void XoaEndl0(char s[]) {
    size_t len = strlen(s);
    if (s[len - 1] == '\n')
        s[len - 1] = '\0';
}
int main()
{
    system("color 71");
    DSPhong p;
    DSSV sv;
    DSNV nv;
    DSHS hs;
    int chon, chon1, chon2, chon3, chon4;
menu:
    system("cls");
    cout << "------ QUAN LY KY TUC XA ------" << endl;
    cout << "---------- MENU -----------" << endl;
    cout << "|    1. Quan Ly Phong" << endl;
    cout << "|    2. Quan Ly Sinh Vien" << endl;
    cout << "|    3. Quan Ly Nhan Vien" << endl;
    cout << "|    4. Quan Ly Ho So" << endl;
    cout << "|    0. Thoat" << endl;
    cout << "----------- End -----------" << endl;
    cout << "Nhap lua chon cua ban: "; cin >> chon; cin.ignore();
    switch (chon) {
    case 1:
    menu1:
        system("cls");
        cout << "------ QUAN LY PHONG ------" << endl;
        cout << "---------- MENU -----------" << endl;
        cout << "|    1. Nhap Danh Sach" << endl;
        cout << "|    2. In Danh Sach" << endl;
        cout << "|    3. Tim Kiem" << endl;
        cout << "|    4. Them Phong" << endl;
        cout << "|    5. Sap Xep" << endl;
        cout << "|    0. Thoat" << endl;
        cout << "----------- End -----------" << endl;
        cout << "Nhap lua chon cua ban: "; cin >> chon1; cin.ignore();
        switch (chon1) {
            case 1:
                p.KhoiTaoDS();
                p.NhapDS();
                system("pause");
                goto menu1;
            case 2:
                p.InDS();
                system("pause");
                goto menu1;
            case 3:
                char* m;
                m = new char[7];
                cout << "Nhap ma phong can tim: "; fflush(stdin); fgets(m, 7, stdin);
                XoaEndl0(m);
                p.TimKiem(m);
                system("pause");
                goto menu1;
            case 4:
                p.Them();
                cout << "Da them vao danh sach!" << endl;
                system("pause");
                goto menu1;
            case 5:
                p.SapXep();
                cout << "\t--Danh sach sau khi sap xep--" << endl;
                p.InDS();
                system("pause");
                goto menu1;
            case 0:
                goto menu;
            default:
                cout << "Hay chon lai!" << endl;
                system("pause");
                goto menu1;
        }
    case 2:
    menu2:
        system("cls");
        cout << "---- QUAN LY SINH VIEN ----" << endl;
        cout << "---------- MENU -----------" << endl;
        cout << "|    1. Nhap Danh Sach" << endl;
        cout << "|    2. In Danh Sach" << endl;
        cout << "|    3. Tim Kiem" << endl;
        cout << "|    4. Them Sinh Vien" << endl;
        cout << "|    5. Sap Xep" << endl;
        cout << "|    0. Thoat" << endl;
        cout << "----------- End -----------" << endl;
        cout << "Nhap lua chon cua ban: "; cin >> chon2; cin.ignore();
        switch (chon2) {
        case 1:
            sv.KhoiTao();
            sv.NhapDS();
            system("pause");
            goto menu2;
        case 2:
            sv.InDS();
            system("pause");
            goto menu2;
        case 3:
            char* a;
            a = new char[11];
            cout << "Nhap mssv can tim: "; fgets(a, 11, stdin); fflush(stdin);
            XoaEndl0(a);
            sv.TimKiem(a);
            system("pause");
            goto menu2;
        case 4:
            sv.Them();
            cout << "Da them vao danh sach!" << endl;
            system("pause");
            goto menu2;
        case 5:
            sv.SapXep();
            cout << "\t--Danh sach sau khi sap xep--" << endl;
            sv.InDS();
            system("pause");
            goto menu2;
        case 0:
            goto menu;
        default:
            cout << "Hay chon lai!" << endl;
            system("pause");
            goto menu2;
        }
    case 3:
    menu3:
        system("cls");
        cout << "---- QUAN LY NHAN VIEN ----" << endl;
        cout << "---------- MENU -----------" << endl;
        cout << "|    1. Nhap Danh Sach" << endl;
        cout << "|    2. In Danh Sach" << endl;
        cout << "|    3. Tim Kiem" << endl;
        cout << "|    4. Them Nhan Vien" << endl;
        cout << "|    5. Sap Xep" << endl;
        cout << "|    0. Thoat" << endl;
        cout << "----------- End -----------" << endl;
        cout << "Nhap lua chon cua ban: "; cin >> chon3; cin.ignore();
        switch (chon3) {
        case 1:
            nv.KhoiTao();
            nv.NhapDS();
            system("pause");
            goto menu3;
        case 2:
            nv.InDS();
            system("pause");
            goto menu3;
        case 3:
            char* b;
            b = new char[7];
            cout << "Nhap ma nhan vien can tim: "; fgets(b, 7, stdin); fflush(stdin);
            XoaEndl0(b);
            nv.TimKiem(b);
            system("pause");
            goto menu3;
        case 4:
            nv.Them();
            cout << "Da them vao danh sach!" << endl;
            system("pause");
            goto menu3;
        case 5:
            nv.SapXep();
            cout << "\t--Danh sach sau khi sap xep--" << endl;
            nv.InDS();
            system("pause");
            goto menu3;
        case 0:
            goto menu;
        default:
            cout << "Hay chon lai!" << endl;
            system("pause");
            goto menu3;
        }
    case 4:
    menu4:
        system("cls");
        cout << "------ QUAN LY HO SO ------" << endl;
        cout << "---------- MENU -----------" << endl;
        cout << "|    1. Nhap Danh Sach" << endl;
        cout << "|    2. In Danh Sach" << endl;
        cout << "|    3. Tim Kiem" << endl;
        cout << "|    4. Them Ho So" << endl;
        cout << "|    5. Sap Xep" << endl;
        cout << "|    0. Thoat" << endl;
        cout << "----------- End -----------" << endl;
        cout << "Nhap lua chon cua ban: "; cin >> chon4; cin.ignore();
        switch (chon4) {
        case 1:
            hs.KhoiTao();
            hs.NhapDS();
            system("pause");
            goto menu4;
        case 2:
            hs.InDS();
            system("pause");
            goto menu4;
        case 3:
            char* c;
            c = new char[7];
            cout << "Nhap ma ho so can tim: "; fgets(c, 7, stdin); fflush(stdin);
            XoaEndl0(c);
            hs.TimKiem(c);
            system("pause");
            goto menu4;
        case 4:
            hs.Them();
            cout << "Da them vao danh sach!" << endl;
            system("pause");
            goto menu4;
        case 5:
            hs.SapXep();
            cout << "\t--Danh sach sau khi sap xep--" << endl;
            hs.InDS();
            system("pause");
            goto menu4;
        case 0:
            goto menu;
        default:
            cout << "Hay chon lai!" << endl;
            system("pause");
            goto menu4;
        }
    case 0:
        exit(0);
    default:
        cout << "Hay chon lai!" << endl;
        system("pause");
        goto menu;
    }
    return 0;
}