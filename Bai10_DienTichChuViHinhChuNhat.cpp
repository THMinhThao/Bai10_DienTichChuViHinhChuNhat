// Bai10_DienTichChuViHinhChuNhat.cpp : 
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Tinh Dien Tich Chu Vi Hinh Chu Nhat";
    double dai, rong, chuvi, dientich;

    cout << "Nhap chieu dai:"; cin >> dai;
    cout << "Nhap chieu rong:"; cin >> rong;

    chuvi = ( dai + rong) * 2;
    dientich = dai * rong;

    cout << "Chu vi: " << chuvi << endl;
    cout << "Dien tich: " << dientich << endl;
    return 0;
}

