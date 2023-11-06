// hàm tính tổng các chữ số của số nguyên n
#include <iostream>

using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    cout << "Tong cac chu so la: " << sum(n) << endl;
    return 0;
}
