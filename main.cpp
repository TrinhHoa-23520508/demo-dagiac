#include <iostream>
#include "Diem.h"
#include "DaGiac.h"
#include "cmath"
using namespace std;

int main()
{
    DaGiac x;
    cout<<"               MENU              \n";
    cout<<"1: Nhap Da Giac.\n";
    cout<<"2: Xuat Da Giac.\n";
    cout<<"3: Tinh tien da giac theo vecto (a, b).\n";
    cout<<"4: Quay da giac quay goc toa do O 1 goc alpha (alpha tinh bang do).\n";
    cout<<"5: Phong to da giac n lan.\n";
    cout<<"6: Thu nho da giac n lan.\n";
    cout<<"0: Ket thuc chuong trinh.\n";
    cout<<"-----------------------------------------------------------------------\n";
    int a;
    while(1)
    {
        cout<<"Nhap vao lua chon ban muon trong menu: ";
        cin>>a;
        if(a==0) break;
        else
        {
            switch (a)
        {
            case 1: x.NhapDaGiac();break;

            case 2: x.XuatDaGiac();break;
            case 3:
                {
                    double a, b;
                    cout<<"Nhap vao vecto tinh tien\n";
                    cout<<"Thanh phan theo truc hoanh a = ";
                    cin>>a;
                    cout<<"Thanh phan theo truc tung b = ";
                    cin>>b;
                    x.TinhTienDaGiac(a, b);
                    cout<<"Da giac sau khi tinh tien xong la\n";
                    x.XuatDaGiac();
                    break;
                }
            case 4:
                {
                    double alpha;
                    cout<<"Nhap vao goc quanh quanh toa do O alpha = ";
                    cin>>alpha;
                    x.QuayDaGiac(alpha);
                    cout<<"Da giac sau khi quay xong la\n";
                    x.XuatDaGiac();
                    break;
                }
            case 5:
                {
                    double n;
                    cout<<"Nhap vao so lan muon phong to da giac n = ";
                    cin>>n;
                    x.PhongToDaGiac(n);
                    cout<<"Da giac sau khi duoc phong to la\n";
                    x.XuatDaGiac();
                    break;
                }
            case 6:
                {
                    double n;
                    cout<<"Nhap vao so lan muon thu nho da giac n = ";
                    cin>>n;
                    x.ThuNhoDaGiac(n);
                    cout<<"Da giac sau khi thu nho la\n";
                    x.XuatDaGiac();
                    break;
                }
        }
        }
        cout<<"-----------------------------------------------------------------------\n";


    }
    return 0;
}
