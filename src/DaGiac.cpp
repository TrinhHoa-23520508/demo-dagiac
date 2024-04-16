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
    cout<<"Nhap vao tung dinh cua tam giac\n";
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
    cout<<"Da giac gom cac dinh la: \n";
    char x = 'A';
    for(int i =0; i<n; i++)
    {
        cout<<x<<": ";
        p[i].XuatDiem();
        x++;
    }
}
