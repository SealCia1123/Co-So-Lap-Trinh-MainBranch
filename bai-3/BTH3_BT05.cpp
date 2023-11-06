#include <iostream>

using namespace std;

int main()
{
    double diemTichLuy;
    cout << "Nhap diem tich luy cua sinh vien: ";
    cin >> diemTichLuy;
    if (diemTichLuy >= 9)
        cout << "Ket qua xep loai: xuat xac" << endl;
    else if (diemTichLuy >= 8)
        cout << "Ket qua xep loai: gioi" << endl;
    else if (diemTichLuy >= 7)
        cout << "Ket qua xep loai: kha" << endl;
    else if (diemTichLuy >= 6)
        cout << "Ket qua xep loai: trung binh kha" << endl;
    else if (diemTichLuy >= 5)
        cout << "Ket qua xep loai: trung binh" << endl;
    else if (diemTichLuy >= 0)
        cout << "Ket qua xep loai: yeu" << endl;
    else
        cout << "Diem tich luy khong hop le" << endl;
    return 0;
}