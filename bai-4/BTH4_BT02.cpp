// tích các số lẻ trong phạm vi từ 1 đến n
#include <iostream>

using namespace std;

int main()
{
    int n, mul = 1, i = 1;
    do
    {
        cout << "Nhap vao so nguyen n (n > 1): ";
        cin >> n;
        if (n <= 1)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 1)" << endl;
    } while (n <= 1);

    int number = n;
    while (i <= n)
    {
        mul *= i;
        i += 2;
    }
    cout << "Tich cua cac so le tu 1 den " << number << ": " << mul << endl;

    return 0;
}