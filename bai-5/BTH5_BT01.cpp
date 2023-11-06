// tổng từ 1 đến n
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    do
    {
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n trong khoang gia tri (n > 0)" << endl;
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;
    return 0;
}