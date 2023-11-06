// kiểm tra số nguyên tố
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i = 2;
    bool isPrimeNumber = true;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;

    if (n < 2)
        isPrimeNumber = false;
    else
    {
        while (i <= sqrt(n))
        {
            if (n % i == 0)
            {
                isPrimeNumber = false;
                break;
            }
            i++;
        }
    }

    if (isPrimeNumber)
        cout << n << " la so nguyen to" << endl;
    else
        cout << n << " khong phai la so nguyen to" << endl;
    return 0;
}