// tổng các chữ số lẻ của n
#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 0)" << endl;
    } while (n <= 0);
    int sum = 0;

    while (n)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
            sum += digit;
        n /= 10;
    }
    cout << "Tong cac chu so le cua n la: " << sum << endl;
    return 0;
}