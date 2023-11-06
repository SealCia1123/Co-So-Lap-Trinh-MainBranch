// nhận vào chiều dài và rộng của hình chữ nhật và in ra hình chữ nhật
#include <iostream>

using namespace std;

int main()
{
    int d, r;
    cout << "Nhap vao chieu dai va chieu rong cua hinh chu nhat: ";
    cin >> d >> r;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < r; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}