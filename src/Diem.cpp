#include "Diem.h"


Diem::Diem(double a, double b)
{
    set(a, b);
}
void Diem::set(double a, double b)
{
    x = a;
    x = b;
}
void Diem::getTungDo()
{
    return y;
}
void Diem::getHoanhDo()
{
    return x;
}
void Diem::setTungDo(double b)
{
    y = b;
}
void Diem::setHoanhDo(double a)
{
    x = a;
}
void Diem::TinhTienDiem(double a, double b)
{
    this->x = x+a;
    this->y = y+b;
}
void QuayDiemQuanhO(double alpha)
{

}



Diem::~Diem()
{
    //dtor
}
