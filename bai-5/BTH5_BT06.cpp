// nhận vào chiều dài và rộng của hình chữ nhật và in ra hình chữ nhật
#include <iostream>

using namespace std;

int main()
{
    int d, r;
    do
    {
        cout << "Nhap vao chieu dai va chieu rong cua hinh chu nhat (dai > 0, rong > 0): ";
        cin >> d >> r;
        if (d <= 0 || r <= 0)
            cout << "Chieu dai va chieu rong nhap vao khong hop le\n";
    } while (d <= 0 || r <= 0);

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < r; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}