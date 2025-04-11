#include "DSNhanVienVP.h"
#include<iostream>
using namespace std;


void DSNhanVienVP::NhapDanhSach() {
	cout << "Nhap So Luong Nhan Vien: ";
	cin >> this->n;
	for (int i = 0; i < n; i++) {
		NhanVienVP A;
		A.NhanVienVP::Nhap();
		NV.push_back(A);
	}
}

void DSNhanVienVP::XuatDanhSach() const {
	for (int i = 0; i < n; i++) {
		NV[i].NhanVienVP::Xuat();
	}
}

NhanVienVP DSNhanVienVP::NhanVienLuongCaoNhat() const {
	double higLuong = NV[0].getLuong();
	NhanVienVP A = NV[0];
	for (int i = 0; i < n; i++) {
		if (higLuong < NV[i].getLuong()) {
			higLuong = NV[i].getLuong();
			A = NV[i];
		}
	}
	return A;
}

double DSNhanVienVP::TongLuong() const{
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += NV[i].getLuong();
	}
	return sum;
}

NhanVienVP DSNhanVienVP::NhanVienCaoTuoiNhat() const {
	int higAge = NV[0].TinhTuoi();
	NhanVienVP A = NV[0];
	for (int i = 0; i < n; i++) {
		if (higAge < NV[i].TinhTuoi()) {
			higAge = NV[i].TinhTuoi();
			A = NV[i];
		}
	}
	return A;
}

void DSNhanVienVP::SapXepNhanVienVP() {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (NV[i].getLuong() > NV[j].getLuong()) {
				NhanVienVP T = NV[i];
				NV[i] = NV[j];
				NV[j] = T;
			}
		}
	}
}