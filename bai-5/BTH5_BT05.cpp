// kiểm tra trong khoảng từ n1 -> n2 có bao nhiêu số nguyên tố
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2, countPrimeNumber = 0;
    cout << "Nhap vao 2 so nguyen duong n1, n2 (n2 > n1): ";
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j != 0)
                countPrimeNumber++;
        }
    }
    cout << "So luong so nguyen to tu " << n1 << " den n2 la: " << countPrimeNumber << endl;
    return 0;
}