#include "Diem.h"
#include<cmath>
#include<iostream>

using namespace std;


Diem::Diem(double tungdo, double hoanhdo)
{
    set(tungdo, hoanhdo);
}
void Diem::set(double tungdo, double hoanhdo)
{
    y = tungdo;
    x = hoanhdo;
}
double Diem::getTungDo()
{
    return y;
}
double Diem::getHoanhDo()
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
void Diem::QuayDiemQuanhO(double alpha)
{
    double radian = 1.0*(alpha * 2 *M_PI)/360;
    this -> x = x* cos(radian)-y* sin(radian);
    this -> y = x*sin(radian) + y*cos(radian);

}
void Diem::NhapDiem()
{
    cout<<"Hoanh do: ";
    cin>>x;
    cout<<"Tung do: ";
    cin>>y;
}
void Diem::XuatDiem()
{
    cout<<"(x, y) = "<<"("<<x<<", "<<y<<")\n";
}
void Diem::Tang_n_lan(double n)
{
    x*=n;
    y*=n;
}


