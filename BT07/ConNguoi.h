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
	void Nhap();
	void Xuat() const;
	
	int TinhTuoi() const;
};

