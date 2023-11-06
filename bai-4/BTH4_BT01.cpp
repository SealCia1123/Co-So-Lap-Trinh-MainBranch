// tổng các số từ 1 đến n
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Nhap vao so nguyen n (n > 0): ";
    cin >> n;
    int number = n;

    while (n)
    {
        sum += n;
        n--;
    }
    cout << "Tong tu 1 den " << number << " la: " << sum << endl;

    return 0;
}