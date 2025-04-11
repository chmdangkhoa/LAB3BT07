#pragma once
#include "NhanVienVP.h"
#include <vector>
class DSNhanVienVP :
    public NhanVienVP
{
private:
    int n;
    vector<NhanVienVP> NV;
public:
    DSNhanVienVP() : NhanVienVP(), n(0) {}

    void NhapDanhSach();
    void XuatDanhSach() const;
    
    NhanVienVP NhanVienLuongCaoNhat() const;
    double TongLuong() const;
    NhanVienVP NhanVienCaoTuoiNhat() const;
    void SapXepNhanVienVP();
};

