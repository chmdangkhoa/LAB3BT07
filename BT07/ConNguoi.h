#pragma once
#include<string>
using namespace std;

class ConNguoi
{
protected:
	string hoTen;
	int namSinh;
public:
	ConNguoi() {
		this->hoTen = "";
		this->namSinh = 0;
	}

	void setHoTen(string name);
	string getHoTen();

	void setNamSinh(int year);
	int getNamSinh() const;

	void Nhap();
	void Xuat() const;
	
	int TinhTuoi() const;
};

