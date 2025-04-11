#include "NhanVienVP.h"
#include <iostream>
using namespace std;

void NhanVienVP::Nhap() {
	cout << "Nhap Ma Nhan Vien: ";
	cin >> this->maNhanVien; cin.ignore();
	ConNguoi::Nhap();
	cout << "Nhap Luong: ";
	cin >> this->luong;
}

double NhanVienVP::getLuong() const {
	return this->luong;
}

void NhanVienVP::Xuat() const {
	cout << "Ma Nhan Vien: " << this->maNhanVien << endl;
	ConNguoi::Xuat();
	cout << "Luong: " << this->luong << endl;
}