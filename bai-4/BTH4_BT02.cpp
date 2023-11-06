// tích các số lẻ trong phạm vi từ 1 đến n
#include <iostream>

using namespace std;

int main()
{
    int n = 2, mul = 1;
    do
    {
        if (n <= 1)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 1)" << endl;
        cout << "Nhap vao so nguyen n (n > 1): ";
        cin >> n;
    } while (n <= 1);

    int number = n;
    while (n)
    {
        if (n % 2 != 0)
            mul *= n;
        n--;
    }
    cout << "Tich cua cac so le tu 1 den " << number << ": " << mul << endl;

    return 0;
}