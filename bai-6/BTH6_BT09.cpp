// hàm tính tổng các chữ số của số nguyên n
#include <iostream>

using namespace std;

int sumOfDigit(int n);

int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    cout << "Tong cac chu so la: " << sumOfDigit(n) << endl;
    return 0;
}

int sumOfDigit(int n)
{
    int sum = 0;
    if (n >= 0)
    {
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    else
    {
        n *= -1;
        while (n > 9)
        {
            sum += n % 10;
            n /= 10;
        }
        n *= -1;
        sum += n;
        return sum;
    }
}
 