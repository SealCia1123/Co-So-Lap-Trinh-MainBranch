// nhận vào chiều cao của tam giác và in ra tam giác
#include <iostream>

using namespace std;

int main()
{
    int h;
    do
    {
        cout << "Nhap vao chieu cao h cua tam giac (h > 0): ";
        cin >> h;
        if (h <= 0)
            cout << "Chieu cao cua tam giac khong hop le (h > 0)" << endl;
    } while (h <= 0);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
