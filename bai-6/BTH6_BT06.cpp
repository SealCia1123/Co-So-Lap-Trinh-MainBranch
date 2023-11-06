// viết hàm tính số đảo ngược của n
#include <iostream>

using namespace std;

int reversedNumber(int n)
{
    int reversedNumber = 0;
    while (n)
    {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }
    return reversedNumber;
}

int main()
{
    int n = 1;
    do
    {
        if (n <= 0)
            cout << "Nhap sai, nhap lai n nam trong khoang gia tri (n > 0)" << endl;
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
    } while (n <= 0);

    cout << "So nguyen dao nguoc la: " << reversedNumber(n) << endl;
    return 0;
}