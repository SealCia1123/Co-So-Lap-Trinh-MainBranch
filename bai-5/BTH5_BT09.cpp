// nhập vào số nguyên n và in ra bẳng cửu chương n
#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen duong n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai, nhap lai n trong khoang gia tri (n > 0)" << endl;
    } while (n <= 0);

    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;
    return 0;
}
