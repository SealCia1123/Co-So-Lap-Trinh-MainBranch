// tổng các số lẻ từ 1 -> n
#include <iostream>

using namespace std;

int main()
{
    int n, sumOfOddNum = 0;
    do
    {
        cout << "Nhap vao so nguyen duong n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai, nhap lai n trong khoang gia tri (n > 0)" << endl;
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sumOfOddNum += i;
    }
    cout << "Tong cac so le tu 1 den " << n << " la: " << sumOfOddNum << endl;
    return 0;
}
