#ifndef DIEM_H
#define DIEM_H
using namespace std;


class Diem
{
private:
    double x;
    double y;
public:
    Diem(double tungdo = 0, double hoanhdo = 0);
    void set(double tungdo, double hoanhdo);
    double getTungDo();
    double getHoanhDo();
    void setTungDo(double b);
    void setHoanhDo(double a);
    void TinhTienDiem(double a, double b);
    void QuayDiemQuanhO(double alpha);
    void NhapDiem();
    void XuatDiem();
    void Tang_n_lan(double n);

};

#endif // DIEM_H
