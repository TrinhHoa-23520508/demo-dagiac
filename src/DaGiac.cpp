#include "DaGiac.h"
#include"Diem.h"
#include<iostream>
using namespace std;
DaGiac::DaGiac(int size)
{
    n = size;
    p = new Diem[n];
}

DaGiac::~DaGiac()
{
    delete[] p;
}
void DaGiac::NhapDaGiac()
{
    cout<<"Nhap vao so dinh cua da giac n = ";
    cin>>n;
    while(n<3)
    {
        cout<<"So dinh cua da giac phai lon hon 3. Vui long nhap lai!\n";
        cout<<"Nhap vao so dinh cua da giac n = ";
        cin>>n;
    }
    p = new Diem[n];
    char x = 'A';
    for(int i = 0; i<n; i++)
    {
        cout<<"Nhap vao dinh "<<x<<": \n";
        p[i].NhapDiem();
        x++;
    }
}
void DaGiac::XuatDaGiac()
{
    char x = 'A';
    for(int i =0; i<n; i++)
    {
        cout<<x<<": ";
        p[i].XuatDiem();
        x++;
    }
}
void DaGiac::TinhTienDaGiac(double a, double b)
{
    for(int i = 0; i<n; i++)
    {
        p[i].TinhTienDiem(a, b);
    }
}
void DaGiac::QuayDaGiac(double alpha)
{
    for(int i =0; i<n; i++)
    {
        p[i].QuayDiemQuanhO(alpha);
    }
}
void DaGiac::PhongToDaGiac(double n)
{
    for(int i = 0; i<n; i++)
    {
        p[i].Tang_n_lan(n);
    }
}
void DaGiac::ThuNhoDaGiac(double n)
{
    for(int i = 0; i<n; i++)
    {
        p[i].Tang_n_lan(1/n);
    }
}
