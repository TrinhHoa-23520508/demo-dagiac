#ifndef DAGIAC_H
#define DAGIAC_H
#include"Diem.h"
using namespace std;


class DaGiac
{
private:
    Diem *p;
    int n;
public:
    DaGiac(int size = 0);
    ~DaGiac();
    void NhapDaGiac();
    void XuatDaGiac();
    void TinhTienDaGiac(double a, double b);
    void QuayDaGiac(double alpha);
    void PhongToDaGiac(double n);
    void ThuNhoDaGiac(double n);
};

#endif // DAGIAC_H
