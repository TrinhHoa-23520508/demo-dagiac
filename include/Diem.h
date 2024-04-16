#ifndef DIEM_H
#define DIEM_H


class Diem
{
private:
    double x;
    double y;
public:
    Diem(double a = 0, double b = 0);
    void set(double a, double b);
    void getTungDo();
    void getHoanhDo();
    void setTungDo(double b);
    void setHoanhDo(double a);
    void TinhTienDiem(double a, double b);
    void QuayDiemQuanhO(double alpha);
    void NhapDiem();
    void XuatDiem();

};

#endif // DIEM_H
