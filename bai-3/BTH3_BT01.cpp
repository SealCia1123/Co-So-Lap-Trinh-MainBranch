#include <iostream>

using namespace std;

int main()
{
    double diem;
    cout << "Nhap vao diem cua sinh vien: ";
    cin >> diem;
    if (diem >= 5 && diem <= 10)
        cout << "Sinh vien dau" << endl;
    else if (diem >= 0 && diem < 5)
        cout << "Sinh vien rot" << endl;
    else
        cout << "Nhap diem khong hop le" << endl;
    return 0;
}