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

	void setMaNhanVien(string _ma);
	string getMaNhanVien() const;

	void setLuong(double _luong);
	double getLuong() const;

	void Nhap();
	void Xuat() const;
};

