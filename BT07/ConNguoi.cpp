#include "ConNguoi.h"
#include<iostream>

void ConNguoi::Nhap() {
	cout << "Nhap Ten: "; getline(cin, this->hoTen);
	cout << "Nhap Nam Sinh: "; cin >> this->namSinh;
}

void ConNguoi::setHoTen(string name) {
	this->hoTen = name;
}

string ConNguoi::getHoTen() {
	return this->hoTen;
}

void ConNguoi::setNamSinh(int year) {
	this->namSinh = year;
}

int ConNguoi::getNamSinh() const {
	return this->namSinh;
}


void ConNguoi::Xuat() const {
	cout << "Ten: " << this->hoTen << endl;
	cout << "Nam Sinh: " << this->namSinh << endl;
}

int ConNguoi::TinhTuoi() const {
	return 2025 - this->namSinh;
}