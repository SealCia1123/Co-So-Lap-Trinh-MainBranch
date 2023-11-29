/*
nhận vào 1 số nguyên n > 0. Tách từng chữ số của n và thể
hiện chúng dưới dạng cách nhau một khoảng cách
 */
#include <iostream>

using namespace std;

int main()
{
    int n, reversedNumber = 0;
    do
    {
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 0)" << endl;
    } while (n <= 0);

    while (n)
    {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }

    while (reversedNumber)
    {
        int lastDigit = reversedNumber % 10;
        cout << lastDigit << " ";
        reversedNumber /= 10;
    }
    return 0;
}
