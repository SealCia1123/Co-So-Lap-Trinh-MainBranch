// viết hàm tính tổng các số từ 1 -> n, hàm tính giai thừa
#include <iostream>

using namespace std;

int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
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

    cout << "Tong cac so tu 1 den " << n << " la: " << sum(n) << endl;
    cout << "Giai thua cua " << n << " la: " << factorial(n) << endl;
    return 0;
}