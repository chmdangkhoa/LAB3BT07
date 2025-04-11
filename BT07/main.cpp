#include "DSNhanVienVP.h"
#include <iostream>
using namespace std;

int main() {
	DSNhanVienVP A;
	A.NhapDanhSach();
	cout << "Thong Tin Cua Nhan Vien Co Luong Cao Nhat: " << endl;
	A.NhanVienLuongCaoNhat().Xuat();
	cout << "Tong Luong Phai Tra Cho Nhan Vien: " << A.TongLuong() << endl;
	cout << "Thong Tin Cua Nhan Vien Co Tuoi Cao Nhat: " << endl;
	A.NhanVienCaoTuoiNhat().Xuat();
	cout << "Sap Xep Danh Sach Nhan Vien Tang Dan Theo Luong: " << endl;
	A.SapXepNhanVienVP();
	A.XuatDanhSach();
	return 0;
}