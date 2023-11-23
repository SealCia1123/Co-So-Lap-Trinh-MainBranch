// viết hàm kt số nguyên tố
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    cout << "Nhap vao so nguyen can kiem tra: ";
    cin >> n;
    if (isPrime(n))
        cout << "So " << n << " la so nguyen to" << endl;
    else
        cout << "So " << n << " khong phai la so nguyen to" << endl;
    return 0;
}

bool isPrime(int n)
{
    bool isPrime = true;
    if (n < 2)
        isPrime = false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
