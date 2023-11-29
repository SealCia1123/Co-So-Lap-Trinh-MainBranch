// kiểm tra trong khoảng từ n1 -> n2 có bao nhiêu số nguyên tố
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2, countPrimeNumber = 0;
    do
    {
        cout << "Nhap vao 2 so nguyen duong n1, n2 (n1 < n2): ";
        cin >> n1 >> n2;
        if (n1 > n2)
            cout << "Nhap sai, nhap lai n1, n2 trong khoang gia tri (n1 < n2)\n";
    } while (n1 > n2);

    for (int i = n1; i <= n2; i++)
    {
        bool isPrime = true;
        if (i < 2)
            isPrime = false;
        else
        {
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            countPrimeNumber++;
    }
    cout << "So luong so nguyen to tu " << n1 << " den n2 la: " << countPrimeNumber << endl;
    return 0;
}