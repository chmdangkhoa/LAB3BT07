#pragma once
#include "ConNguoi.h"
class NhanVienVP :
	public ConNguoi
{
protected:
	string maNhanVien;
	double luong;
public:
	NhanVienVP() : ConNguoi(), maNhanVien(""), luong(0) {}

	double getLuong() const;

	void Nhap();
	void Xuat() const;
};

